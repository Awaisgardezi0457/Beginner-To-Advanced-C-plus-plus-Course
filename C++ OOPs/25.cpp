//Multi-level Inheritance:
#include <iostream>

using namespace std;
class Vehicle{
  public:  
  int top_speed;
    float mileage;
    string fuel;
};
class TwoWheeler: public Vehicle{
  public:
 bool sunroof;
};
class FourWheeler:public Vehicle{

};
class Scooty:public TwoWheeler{
public:

};
class Bike:public TwoWheeler{
public:

};
int main()
{
Scooty s1;
s1.fuel="CNG";
cout<<s1.fuel<<endl;
  return 0;
}
//This is Multi-Level Inheritence.