//Write a program to count the number of digits in a given number using a while loop.
#include <iostream>

using namespace std;

int main()
{
    int n,count=0;
    cout<<"Enter Number:";
    cin>>n;
    if(n==0){
        count=1;
    }
    else{
        if (n<0){
            n= -n;
        }
    }
    while(n>0){
        n=n/10;
        count++;
    }
    cout<<count<<endl;
  return 0;
}