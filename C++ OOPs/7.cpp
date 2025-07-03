
#include <iostream>

using namespace std;
class Car{
    public:
    string name;
    int price;
    int seats;   
    string type;
    Car(string n,int p,int s,string t){
        name=n;
        price=p;
        seats=s;
        type=t;
    }
};
void print(Car c){
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<endl;
}
int main()
{
    Car c1("Honda City",1500000,5,"sedan");
print(c1);

  return 0;
}
// if we haven't created a constructor then there is a default constructor that works.
//Default constructor is an empty constructor with as we know no return-type.
/*
Example:Student(){
   }
*/
//if we haven't created a constructor then automatically it is created.
//parameterized constructor is which we have created with given parameters.
// we can overwrite a constructing value.
// we can give three attributes or 2 attributes or even a single attribute. 
// if you don't give values in a class to the attributes then automatically garbage values are 
//are stored. 
