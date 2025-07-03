//Vehicle class:
#include <iostream>

using namespace std;
class Vehicle{
  public:  
  int top_speed;
    float mileage;
    string fuel;
};
class Car: public Vehicle{
  public:
 bool sunroof;
};
class Bike:public Vehicle{
public:

};
class Truck:public Vehicle{
public:

};
int main()
{
Car c1;
c1.sunroof=true;
cout<<c1.sunroof<<endl;
  return 0;
}
//: this sign before inherent class is known as extent.
//Child class/Derived class takes all its details from the parent class.
//Multi-level inheritance is that grandchild class inherit from child and it from parent class.
//It can also have two parent classes from which child class can inherit.This type is 
//known as multiple Inheritance.

