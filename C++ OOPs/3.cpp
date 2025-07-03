#include <iostream>

using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;   //these are  all attributes of a class.
    string type;
    // int topspeed;
    // int enginecc;
};
int main()
{
  Car c1;
  c1.name="Honda City";
  c1.price=4700000;
  c1.seats=5;
  c1.type="sedan";
  
  Car c2;
  c2.name="Suzuki Swift";
  c2.price=3400000;
  c2.seats=5;
  c2.type="HatchBack";

  Car c3;
  c3.name="Toyota Fortuner";
  c3.price=16700000;
  c3.seats=8;
  c3.type="SUV";
  cout<<c1.name<<" "<<c1.price<<" "<<c1.seats<<" "<<c1.type<<endl;
  cout<<c2.name<<" "<<c2.price<<" "<<c2.seats<<" "<<c2.type<<endl;
   cout<<c3.name<<" "<<c3.price<<" "<<c3.seats<<" "<<c3.type<<endl;
  return 0;
}
//A class is a Blue-Print and objects are its instance.
//Basically,the class is the classification of something that exists of a particular group. 
// we can make multiple objects with varying details etc. 

