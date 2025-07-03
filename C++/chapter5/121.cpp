//Pointers:
#include <iostream>

using namespace std;

int main()
{
int x=3;
int * p=&x;//syntax of pointers.
cout<<&x<<endl;
cout<<p<<endl;
// cout<<x<<endl;
cout<<*p;// * is de-reference operator which is used to access the value at address.
  return 0;
}
//by using pointers we can access the value of variable whose address is in the pointer.
//using dereference/* operator
//every pointer also has its own address.
// using the de reference operator we can fetch the value and update it.
