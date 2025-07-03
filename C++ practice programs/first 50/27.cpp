//Write a program to print the Fibonacci series till  n terms using a while loop.
//fibonacci series (0,1 are fixed digits and rest are the sum of them).
//when we'll add them we;ll generate the 3rd term and then so on.
//we have to take this value upto n terms.n would be entered by the user.
// if user has entered 5 terms then till 5 fibonacci series will be printed.
//sometimes fibonacci series starts from 1.

#include<iostream>
using namespace std;
int main(){
int n,a=0,b=1,c,i=1;
cout<<"Enter your Number:";
cin>>n;
cout<<a<<" "<<b<<" ";
while(i<=n){
c=a+b;
cout<<c<<" ";
a=b;
b=c;
i++;
}
}