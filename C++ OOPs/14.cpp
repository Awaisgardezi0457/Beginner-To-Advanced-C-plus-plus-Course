//Object Pointer:
//It is an important topic and mostly it is left out but we'll gonna thoroughly learn about
//it.It will help us when we'll study linked lists.So,in order to understand them we have to
//understand the object pointers.
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
  
};
// void change(Cricketer c){see when we don't use & and pass by value happens and value does not changes.
void change(Cricketer &c){// now value will change and it will become pass by reference.

c.avg=77.2;
}
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    cout<<c1.avg<<endl;
change(c1);
cout<<c1.avg<<endl;
    // Cricketer*p1=&c1;
    // cout<<(*p1).runs<<endl;//Bracket is Compulsory.
    // (*p1).avg=77.9;//c1.avg=77.9;
    // cout<<(*p1).avg<<endl;
}
//We can do Everything with c1 using pointers.We can change,print or do anything with it. 
