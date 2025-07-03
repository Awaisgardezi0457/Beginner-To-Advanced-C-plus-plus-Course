// Swap two numbers using arithmetic operators (without a third variable)
#include <iostream>

using namespace std;

int main()
{
  int a,b;
   cout<<"enter the value of a:";
 cin>>a;
  cout<<"enter the value of b:";
 cin>>b;
 cout<<"Original Values:"<<a<<" "<<b<<" ";
 a=a+b;
 b=a-b;
 a=a-b;
 cout<<"swapped Values:"<<a<<" "<<b<<" ";
  return 0;
}