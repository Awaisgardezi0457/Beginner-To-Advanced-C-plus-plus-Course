//Functions inside Class:
//at first we learnt that we can create data members for a class that how many items can be 
//stored inside it.
//Here,our basic purpose is that we have to create normal functions as we create before
//but now we have to input them inside a class.
#include <iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    float avg;
    Cricketer(string name,int runs,float avg){
        this->name=name;
        this->runs=runs;
        this->avg=avg;
    }
    void print(int a){
cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
cout<<a<<endl;
}
};
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    Cricketer c2("Virat Kohli",25000,55.2);
    // c1.name="Virat Kohli";
    // c1.runs=25000;
c1.name="Fakhar Zaman";//shallow copy
   c1.print(12);
   c2.print(29);
}  // the following function is outside the class we can also make it inside the class. 
//those functions we are making in a class we can also pass parameters in them. 
