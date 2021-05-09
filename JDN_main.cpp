//
// main.cpp
// This program finds the Julian Day Number and Day of week for your birthday. 
//

#include <iostream>

void get_date(int &month, int &day, int &year);
void compute_jdn(int month, int day, int year, int &jdn);
void compute_dow(int birthday_month, int birthday_day, int birthday_year, int &birthday_dow);
void compute_days(int today_jdn, int birthday_jdn, int &days_between);
void display_date(int month, int day, int year);
void display_results(int today_month, int today_day, int today_year, int today_jdn, int birthday_month, int birthday_day, int birthday_year, int birthday_jdn, int birthday_dow, int days_between);

int main()
{
int today_month, today_day, today_year, today_jdn;
int birthday_month, birthday_day, birthday_year, birthday_jdn;
int birthday_dow, days_between;
    
    std::cout<< "For todays date..." << std::endl;
get_date (today_month, today_day, today_year);
    
    std::cout <<std::endl;
    std::cout <<"For your birthday...";
    std::cout <<std::endl;
    
get_date(birthday_month, birthday_day, birthday_year);
compute_jdn(today_month, today_day, today_year, today_jdn);
compute_jdn(birthday_month, birthday_day, birthday_year, birthday_jdn);
compute_dow(birthday_month, birthday_day, birthday_year, birthday_dow);
compute_days(today_jdn, birthday_jdn, days_between);
display_results(today_month, today_day, today_year, today_jdn, birthday_month, birthday_day, birthday_year, birthday_jdn, birthday_dow, days_between);
display_date (today_month, today_day, today_year);
display_date (birthday_month, birthday_day, birthday_year);
}
// This modular gathers the users dates//

void get_date(int &month, int &day, int &year)
{
    std::cout << "Enter month number (Jan=1, Feb=2, etc.):";
    std::cin  >> month;
    std::cout << "Enter day number                       :";
    std::cin  >> day;
    std::cout << "Enter year using four digits           :";
    std::cin  >> year;
    std::cout <<std::endl;
    
}
// This modular calculates the users Julian day number//

void compute_jdn(int month, int day, int year, int &jdn)
{
int a;
int m;
int y;
int leap_days;

a= ((14-month)/12);

m= (month-3) + (12 * a);

y= year +4800 - a;

leap_days = (y/4) -(y/100) + (y/400);

jdn = day + (((153 * m) + 2)/ 5) + (365 * y) + leap_days - 32045;

}
//A processing module “day of the week” (DOW) the user was born//
    
void compute_dow(int birthday_month, int birthday_day, int birthday_year, int &birthday_dow)
{

    int birthday_jdn;
    compute_jdn(birthday_month, birthday_day, birthday_year, birthday_jdn);
    birthday_dow = (birthday_jdn + 1) % 7;
    
}
    
//A processing module that computes the number of days between two given jdns//
void compute_days(int today_jdn, int birthday_jdn, int &days_between)
{
    days_between = today_jdn - birthday_jdn;
}
//
// This modular displays the dates//
//

void display_date (int month, int day, int year)
{
    std::cout << month << "/" << day << "/" << year ;
}
//Below is the display module//

void display_results(int today_month, int today_day, int today_year, int today_jdn, int birthday_month, int birthday_day, int birthday_year, int birthday_jdn, int birthday_dow, int days_between)
{
std::cout   << std::endl;
std::cout   << std::endl;
std::cout   << "The JDN for "
            <<today_month
            << '/'
            <<today_day
            << '/'
            <<today_year
            <<" is "
            <<today_jdn;
std::cout   <<std::endl;
    
std::cout   <<"The JDN for your birthday on "
            <<birthday_month
            << '/'
            <<birthday_day
            << '/'
            <<birthday_year
            <<" was "
            <<birthday_jdn;
std::cout   <<std::endl;
    
std::cout << "The DOW on your birthday was " <<birthday_dow<< "(0=Sun, 1=Mon, etc.)";
std::cout <<std::endl
          <<"It has been "
          <<days_between<< " days since you were born."
          <<std::endl;
}
