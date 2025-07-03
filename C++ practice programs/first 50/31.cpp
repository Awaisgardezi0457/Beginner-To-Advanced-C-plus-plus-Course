//Write a program to reverse a given number using a do-while loop.
#include <iostream>

using namespace std;

int main()
{
  int n,last_digit,rev;
  cout<<"enter number:";
  cin>>n;
  do{
    last_digit=n%10;
    rev=rev*10+last_digit;
    n=n/10;
  } while (n>0);
 cout<<rev;
  return 0;
}