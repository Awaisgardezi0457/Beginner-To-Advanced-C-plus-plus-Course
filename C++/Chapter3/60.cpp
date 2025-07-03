//write a program to print sum of digits of given number:
//Hint:
//1)modulus Operator (%) 2)n%10 gives last digit   3)1+2+3+4=4+3+2+1
#include <iostream>

using namespace std;

int main()
{
  int n,sum=0;
  cout<<"enter number :";
  cin>>n;
while(n>0)
{ int last_digit;
    last_digit=n%10;
     n/=10;//n=n/10
     sum+=last_digit;

}
cout<<sum;
  return 0;
}