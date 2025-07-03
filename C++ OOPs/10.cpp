//This Key-word:
//It is very important concept in OOps and would be continued to be used many times.
#include <iostream>
using namespace std;
class Cricketer{
public:
    string name;
    int runs;
    Cricketer(string name,int runs){
        this->name=name;
        this->runs=runs;
    }
};
int main(){
    Cricketer c1("Babar Azam",24000);
    Cricketer c2("Virat Kohli",25000);
    // c1.name="Virat Kohli";
    // c1.runs=25000;

    cout<<c1.name<<" "<<c1.runs<<endl;
    cout<<c2.name<<" "<<c2.runs<<endl;
}
// if you'll give same names to the construtors parameters and class variables the compiler will 
//store the constructor parameters in the constructor parameters and will return a garbage value.
//the following problem is rectified by using this key-word.
//The this keyword is used to identify the parameters.
//the following keyword allows you to write the same variable names and constructor parameter names. 
//The basic function of This keyword is this. 

