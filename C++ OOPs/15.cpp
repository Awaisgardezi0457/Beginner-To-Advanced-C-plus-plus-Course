//Now by Pointers:
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
void change(Cricketer *c){
(*c).avg=77.9;//Now it will change using dereference operator and by using pointers.
}
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    cout<<c1.avg<<endl;
change(&c1);
cout<<c1.avg<<endl;
}
//Cause address are unique so they are pass by reference and you can get your values changed easily.

