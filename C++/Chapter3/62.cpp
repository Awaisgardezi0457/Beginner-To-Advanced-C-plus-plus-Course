// write a program to print the product of given numbers:
//(there won't be zero in the number).
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter number:";
 cin>>n;
 int product;
 product=1;
 while(n>0)
 {
    int last_digit=n%10;
    n/=10;
    product*=last_digit;
 }
 cout<<product;
  return 0;
}
