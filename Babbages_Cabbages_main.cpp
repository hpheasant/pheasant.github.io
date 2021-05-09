//Program    :Lab# 7 Babbages's Cabbages, Part2
//Author     :Hannah Pheasant
//Date       :04/09/2020
//Description:This program computes gross pay, taxes and net pay from
//user's inputs.
#include <iostream>
#include <string>
#include <iomanip>
#define DEDUCTIONS 10.0
#define INCOME_TAX_RATE 0.30
#define OVERTIME_BEGIN 40.0
#define OVERTIME_PAYRATE 1.5
#define MIN_PAY 0.00
#define MAX_PAY 49.99
#define MIN_HOURS 0.00
#define MAX_HOURS 54.00

void input_info(std::string &full_name, double &hours_worked, double &pay_rate);
void join_name(std::string first_name, std::string last_name, std::string &full_name);
void compute(double hours_worked, double pay_rate, double &gross_pay, double &taxes, double &net_pay, double &regular_hours, double &overtime_hours);
void compute_gross(double hours_worked, double pay_rate, double &gross_pay);
void compute_taxes(double gross_pay, double &taxes);
void compute_net(double gross_pay, double taxes, double &net_pay);
void display_info(std::string full_name, double hours_worked, double pay_rate, double gross_pay, double taxes, double net_pay, double regular_hours, double overtime_hours);
void regular_overtime_split(double hours_worked, double &regular_hours, double &overtime_hours);
void get_yesno(char &answer);


int main()
{
    std::string full_name;
    double hours_worked, pay_rate, gross_pay, taxes, net_pay, regular_hours, overtime_hours;
    char answer;
    
    do {
        
        input_info(full_name, hours_worked, pay_rate);
        compute(hours_worked, pay_rate, gross_pay, taxes, net_pay, regular_hours, overtime_hours);
        display_info(full_name, hours_worked, pay_rate, gross_pay, taxes, net_pay, regular_hours, overtime_hours);
        get_yesno(answer);
        
    } while ((answer == 'y') || (answer == 'Y'));
}
// This module will ask for user input.
void input_info(std::string &full_name, double &hours_worked, double &pay_rate)
{
    std::string first_name, last_name;
    
    std::cout <<"Enter the employee's first name:";
    std::cin >> first_name;
    
    std::cout <<"Enter the employee's last name:";
    std::cin >> last_name;
    
    do {
        
        std::cout <<"Enter number of hours worked:";
        std::cin >> hours_worked;
        
        if ((hours_worked < MIN_HOURS)||(hours_worked > MAX_HOURS)){
            std::cout<< std::fixed << std::setprecision(2);
            std::cout << "The number of hours worked must be between " << MIN_HOURS << " and " << MAX_HOURS;
            std::cout <<std::endl;
            std::cout <<std::endl;
        }
        
    }while ((hours_worked < MIN_HOURS) || (hours_worked > MAX_HOURS));
    
    do{
        
        std::cout <<"Enter hourly pay rate:";
        std::cin >> pay_rate;
        
        if ((pay_rate < MIN_PAY)||(pay_rate > MAX_PAY)){
            std::cout<< std::fixed << std::setprecision(2);
            std::cout << "The hourly pay rate must be between " << MIN_PAY << " and " << MAX_PAY;
            std::cout <<std::endl;
            std::cout <<std::endl;
        }
        
    }while ((pay_rate < MIN_PAY) || (pay_rate > MAX_PAY));
    
    join_name(first_name, last_name, full_name);
    
}
//This module performs all calculations in the program.

void compute(double hours_worked, double pay_rate, double &gross_pay, double &taxes, double &net_pay, double &regular_hours, double &overtime_hours)
{
    
    compute_gross(hours_worked, pay_rate, gross_pay);
    compute_taxes(gross_pay, taxes);
    compute_net(gross_pay, taxes, net_pay);
    regular_overtime_split(hours_worked, regular_hours, overtime_hours);
}

//This module combines the user's first and last name.
void join_name(std::string first_name, std::string last_name, std::string &full_name)
{
    full_name = last_name + ", " + first_name;
}

void regular_overtime_split(double hours_worked, double &regular_hours, double &overtime_hours)
{
    if (hours_worked > 40){
        overtime_hours = hours_worked - OVERTIME_BEGIN;
    }
    else { overtime_hours = 0.00;
    }
    regular_hours = hours_worked - overtime_hours;
}
//This module computs the user's gross pay.
void compute_gross(double hours_worked, double pay_rate, double &gross_pay)
{
    double regular_hours, overtime_hours;
    
    regular_overtime_split(hours_worked, regular_hours, overtime_hours);
    
    gross_pay = ((regular_hours * pay_rate) + (overtime_hours * (pay_rate * OVERTIME_PAYRATE)));
}

//This module computes taxes.
void compute_taxes(double gross_pay, double &taxes)
{
    
    taxes = INCOME_TAX_RATE * gross_pay;
}

//THis module computes net pay.
void compute_net(double gross_pay, double taxes, double &net_pay)
{
    net_pay = gross_pay - taxes - DEDUCTIONS ;
}

//This modules displays the program calculatins from user input.
void display_info(std::string full_name, double hours_worked, double pay_rate, double gross_pay, double taxes, double net_pay, double regular_hours, double overtime_hours)
{
    std::cout << std::endl;
    std::cout <<std::left<< std::setw(20)<< ""<<"  "
    <<std::setw(7)<<"Reg."<<"  "
    <<std::setw(7)<<"Ovt."<<"  "
    <<std::setw(7)<<"Hourly"<<"  "
    <<std::setw(7)<<"Gross"<<"  "
    <<std::setw(7)<<""<<"  "
    <<std::setw(7)<<""<<"  "
    <<std::setw(7)<<"Net"<<"  "
    << std::endl;
    
    std::cout<< std::setw(20)<<"Name"<<"  "
    <<std::left<<std::setw(6)<<"Hours"<<"   "
    <<std::setw(7)<<"Hours"<<"  "
    <<std::setw(7)<<"Rate"<<"  "
    <<std::setw(5)<<"Pay"<<"    "
    <<std::setw(6)<<"Taxes"<<"   "
    <<std::setw(7)<<"Deduct"<<"  "
    <<std::setw(7)<<"Pay"<<"  "
    <<std::endl;
    
    std::cout<< std::setw(20)<<"===================="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    <<std::setw(7)<<"======="<<"  "
    << std::endl;
    
    std::cout<< std::setw(20)<<full_name<<"  "
    <<std::right << std::fixed << std::setprecision(2)
    <<std::setw(7)<<regular_hours<<"  "
    <<std::setw(7)<<overtime_hours<<"  "
    <<std::setw(7)<<pay_rate<<"  "
    <<std::setw(7)<<gross_pay<<"  "
    <<std::setw(7)<<taxes<<"  "
    <<std::setw(7)<<DEDUCTIONS<<"  "
    <<std::setw(7)<<net_pay<<"  "
    <<std::endl<<std::endl;
}

//
// An input module that asks the player if they want to play the game again.
//
void get_yesno(char &answer)
{
    do {
        std::cout << std::endl;
        std::cout << "Process another employee (Y/N)? ";
        std::cin >> answer;
        
        if (answer == 'y'){
            answer = 'Y';
            std::cout << std::endl;
        }
        else if (answer == 'n'){
            answer = 'N';
        }
        if((answer != 'Y' ) && (answer != 'N' )){
            std::cout <<"Please type 'Y' for yes or 'N' for no"
            << std:: endl << std:: endl;
        }
        
    }  while ((answer != 'Y') && (answer != 'N' ));
}
