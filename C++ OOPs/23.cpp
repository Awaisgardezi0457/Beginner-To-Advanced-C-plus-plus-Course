//Inheritance:
//Inheritance means to take something from our forefathers.It is biological definition 
//while in programming it is the traits that a function inherits from a class.
//In OOps,Perspective Inheritance is that we can have a derived class of a class.
#include <iostream>

using namespace std;

class Scooty{          //Parent class
public:
    int top_speed;
    float mileage;
private:
int bootSpace;
};
class Bike: public Scooty{    //Child class/Derived Class
    public:
    int gears;
};
int main()
{
 Bike b1;
 b1.top_speed=180;
 b1.mileage=12.5;
 b1.gears=6;
//  b1.bootSpace=7; we cannot use it here.
cout<<b1.top_speed<<" "<<b1.mileage<<" "<<b1.gears<<endl;
  return 0;
}
// if I try to make a class which contains the properties of another class.
// while Inheriting a class we have to again public the class and then public the inherited
//class parameters.
//I can access the bootSpace for scooty by making constructors or using getters and setters as I explained Before.
//This is known as Single class Inheritance.

