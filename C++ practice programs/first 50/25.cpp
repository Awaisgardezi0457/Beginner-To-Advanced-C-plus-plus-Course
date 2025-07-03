//Write a program to find the sum of digits of a given number using a while loop.
#include <iostream>

using namespace std;

int main()
{
 int i=1,n,sum=0;
 cout<<"enter your Number:";
 cin>>n;
 while(i<=n){
sum+=i;
i++;
 }
 cout<<sum<<" ";
  return 0;
}