//Operations using operators(+,-,*,/,%)
//they make the foundation of your coding career.
//Write a program to count digits of a given number;
#include <iostream>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int count=0;
  while(n>0){// while condition could also be 'n' not equal to zero(!=0).
    n=n/10;
    count++;
  }
  cout<<count;
}