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
    void print(int runs){
cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
cout<<runs<<endl;
}
int matches(){
    return runs/avg;
}
};
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    Cricketer c2("Virat Kohli",25000,55.2);
    // c1.name="Virat Kohli";
    // c1.runs=25000;
   c1.print(12);
//    cout<<c1.runs<<endl;
   c2.print(29);
   cout<<c1.matches()<<endl;
   cout<<c2.matches()<<endl;
}
// if we'll use this-keyword then our runs won't be changed after we have passed same 
//parameter runs. 
//This-> keyword makes it sure that wer'e talking about the following attribute. 
//it is advisable to use this-> keyword inside the function to avoid any problem. 


