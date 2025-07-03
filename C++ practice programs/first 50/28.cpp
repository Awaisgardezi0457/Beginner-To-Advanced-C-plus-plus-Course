//Write a program to find the largest digit in a given number using a while loop.
#include <iostream>

using namespace std;

int main()
{
 int n,large=0;
 cout<<"enter your Number:";
 cin>>n;
 while(n>large){
    int last_digit=n%10;
    n=n/10;
    if(last_digit>large){
        large=last_digit;
    }
 }cout<<"the largest digit is:"<<large<<" ";
  return 0;
}