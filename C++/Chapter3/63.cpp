//write a program to print the sum of all the even digits of a given number:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter your digits:";
 cin>>n;
 int sum;
 sum=0;
 while (n>0)
 {
    int last_digit=n%10;
    n=n/10;
sum+=last_digit;
if(n%2==0) {
    cout<<sum<<"  ";
}
else if(n%2!=0){
    cout<<"error detected";
}
 
 }

  return 0;
}