//Arguments and Parameters:
#include <iostream>

using namespace std;
void sum(int a,int b){
cout<< a+b;
}
int main()
{
   sum(11,34);
}
// int a and int b are known as formal parameters.
//sum(11,34) are our actual parameters.They are some values.
// they will store order-wise.
// if above i have two parameters then two arguments will be passed.
//the values which we send to the defined function to be stored are known as actual parameters.
//cout<<a+b; is known as pass-by-value.
// in void datatype we can just call a function.if we have another data-type we can store and print it.
