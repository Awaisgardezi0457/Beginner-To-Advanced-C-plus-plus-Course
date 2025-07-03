//Dynamic Allocation:
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
int main(){
    Cricketer c1("Babar Azam",24000,55.0);
    Cricketer* c2= new Cricketer("Virat Kohli",25000,55.2);
   cout<<c1.name<<" "<<c1.runs<<" "<<c1.avg<<endl;
    // cout<<(*c2).name<<" "<<(*c2).runs<<" "<<(*c2).avg<<endl;
    cout<<c2->name<<" "<<c2->runs<<" "<<c2->avg<<endl;    

} 
//Dynamic Allocation is basically like when we have created a variable with no name 
//but it has a proper address then we store the address in a pointer and print the value.
//As the address exists with proper value despite of name it gets printed. 
//In Dynamic Allocation,Our memory is stored in runtime while in Normal case,it is stored in compile time.
//The Memory Storage of Dynamic Allocation is stored in Heap memory.
/*
Like i've written: 
int x=6;
in it the memory will be stored in compile time. 
*/
//from now on we'll preferably make object pointer instead of objects.
//it is because with object pointer i can do everything. 
// secondly,as it is pointer so it will not be changed and will remain always pass by
//reference.
//it gonna be very useful in traversal of linked lists.

