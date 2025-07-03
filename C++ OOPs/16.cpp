//Method#2:
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
c->avg=77.9;// we got our values changed and it is far better method than previous one.
//(*c).avg=77.9; They both have same meanings.
}
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    cout<<c1.avg<<endl;
change(&c1);
cout<<c1.avg<<endl;
}
//a->b a must be a pointer meana (*a).b.
