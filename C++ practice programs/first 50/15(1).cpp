// Swap two numbers using arithmetic operators (with a third variable)
#include <iostream>

using namespace std;

int main()
{
 int a,b,t;
 cout<<"enter the value of a:";
 cin>>a;
  cout<<"enter the value of b:";
 cin>>b;
cout<<"original values:"<<a<<" "<<b<<" ";
t=a;
a=b;
b=t;
cout<<"Swapped Values:"<<a<<" "<<b<<" ";
  return 0;
}