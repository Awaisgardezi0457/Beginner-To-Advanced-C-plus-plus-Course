//Passing Objects to Functions:
#include <iostream>

using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;   
    string type;
    
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
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

  print(c1);
  print(c2);
  print(c3);
  return 0;
}