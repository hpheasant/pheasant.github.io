
//Hannah Pheasant, Ian Ichwara, Vincent Lam
#include <iostream>
#include <cstring>
using namespace std;

//A car device that indicates when oil is low.

class Car {
private:
    double miles;
    const float full = 4.4;
    float oil;
    char cap[];
public:
    Car();
    bool oilLevel();
    bool changeOil();
    bool checkCap();
};
    //member function definitions
    bool Car::oilLevel(){
        if (oil < full) {
          cout<<"Your oil level is below the full mark"<<endl;
          }
       //check oil levels on it
    }
    bool Car::changeOil(){
        //if miles > 10000 then true
        // if miles < 10000 then false
        //needs to be changed
        if (miles > 10000) {
            cout << "Should check your oil there buddy.";
            return true;
        } else {
            cout << "Looks good to me.";
            return false;
        }
    }
    bool Car::checkCap(){
        // if cap off then false
        // if cap on then true
        if (cap[] == "true") {
            cout << "The cap is on.";
            return true;
        } else {
            cout << "The cap is off.";
            return false;
        }

    }

int main(){
    Car car;
    
    car.getoilLevel();
    car.getchangeOil(true);
    car.setcheckCap(false);
   
    cout<< "Oil Level: "<< oil <<endl;

    cout << "This program determines if your car needs an oil change\n";
    cout << "Synthetic oil needs to be changed every 10000 miles\n";
    cout << "Enter the amount of miles driven in the car: ";
    cin >> miles;
    // can put the functions here later
    cout << "\nIs your oil full?";
    // placeholder for input
    cout << "\nIs the cap on?";
    // placeholder

}
    
       

