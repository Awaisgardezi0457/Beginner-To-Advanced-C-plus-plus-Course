//Virtual Function And Over_riding:
//Runtime Polymorphism:
#include <iostream>
using namespace std;

class Scooty{          
    public:
    int top_speed;
    float mileage;
    virtual void Sound(){//Using virtual we do function Over riding.
        cout<<"Vroom Vroom"<<endl;
    }
private:
int bootSpace;
};
class Bike: public Scooty{    //Child class/Derived Class
    public:
    int gears;
    void Sound(){
        cout<<"Dhroom Dhroom"<<endl;
    }
};
    class SuperBike: public Scooty{    //Child class/Derived Class
    public:
    int gears;
    void Sound(){
        cout<<"zhroom zhroom"<<endl;
    }
};
int main()
{
//  Bike b1;   static allocation
//  b1.Sound();
Scooty* b1=new Bike();   //Object Pointer 
b1->Sound();
//  Scooty* s1=new Scooty();
//  s1->Sound();
Scooty*Sb1=new SuperBike();
Sb1->Sound();// if i'll remove virtual keyword it will print vroom vroom as sound.
  return 0;
}
//So,this was all for Function Over-riding.