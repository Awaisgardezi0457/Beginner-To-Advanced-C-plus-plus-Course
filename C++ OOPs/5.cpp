//check whether objects are pass by value or pass by reference:
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
void change(Car &c){// pass by reference
c.name="Audi A8";
}
int main()
{

  Car c1;
  c1.name="Honda City";
  c1.price=4700000;
  c1.seats=5;
  c1.type="sedan";
  print(c1);
change (c1);  //pass by value so,it got confirmed that objects are pass by value.  
print (c1);
// as I used & in passing parameter in void so it become pass by reference and named change for Honda
//City to Audi A8. 
  return 0;
}