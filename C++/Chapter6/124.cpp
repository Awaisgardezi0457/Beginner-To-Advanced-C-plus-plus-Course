//recursions(functions calling itself):
#include<iostream>
using namespace std;
void greet(){
    cout<<"hey"<<endl;
    greet();
}
int main(){
    greet(); 
}
// if a function calls itself it leds to a recursion.
// recursion are used as a replacement for for loop.
//it is like it says you do a one task secondly it performs a second one for you.
/*
Observations:
1)repitition.
2)resembles to infinite loop. 
*/