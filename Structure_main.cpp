//We use structures to store data of different types. Create a structure called vehicle with the following members: manufacturer, model, cylinders, engine, and cost. Create an instance of the car structure named myCar and assign data to each of the members. Print the contents of each member to standard output using the printf() function.

<pre>
//Vehicle.h
#ifndef VEHICLE_H
#define VEHICLE_H

const int MAXMODEL = 24;
const int MANUFACT_NUM = 15;
const int MAXCARS = 20;
struct vehicleRecord{
 char model[MAXMODEL];
 char manufacturer[MANUFACT_NUM];
 int cylinders;
 float engine;
 float cost;
};

#endif VEHICLE_H


//main
#include <iostream>
#include <cstring>
#include "vehicle.h"
using namespace std;

int main()
{
 struct vehicleRecord car[CARMAX];
 cout<<"Vehicle Inventory Program"<<endl;
 bool quit = false;
 int index = 0;
 cout<<"Please enter the model number(24 Characters maximum) : ";
 cin.getline(car[index].model , 24);
 if(strcmp(car[index].model , "quit") == 0){
  quit = true;
 }
 
 do{
  if(strcmp(car[index].model, "quit") != 0){
      cout << "Please enter the manufacturer : : ";
      cin >> car[index].manufacturer;
      cout << "Please enter the cylinders : ";
      cin >> car[index].cylinders;
      cout << "Please enter the engine : ";
      cin >> car[index].engine;
      cout << "Please enter the cost : ";
      cin >> car[index].cost;
      index++;
      cin.ignore();
      cout << "Please enter model of vehicle (max length 24): ";
      cin.getline(car[index].model, 24);
  }else{
    quit = true;
  }
  cout<<"Store info is for "<<index<<" vehicles"<<endl;
 }while(quit == false);
 
 return 0;
}
