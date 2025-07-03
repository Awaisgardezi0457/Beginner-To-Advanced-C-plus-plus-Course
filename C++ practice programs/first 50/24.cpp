//Write a program to print numbers from 1 to N using a while loop.
#include <iostream>

using namespace std;

int main()
{
    int n,i=1;
    cout<<"Enter your Number:";
    cin>>n;
  while(i<=n){
    cout<<i<<" ";
    i++;
  }
  return 0;
}