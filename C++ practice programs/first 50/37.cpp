//Check if a number is an Armstrong number (use while loop and if condition).
#include <iostream>

using namespace std;

int main()
{
int n,last_digit,sum=0;
cout<<"enter Your Number:";
cin>>n;
int original=n;//save n for comparison.
while(n>0){
    last_digit=n%10;
    sum=sum+(last_digit*last_digit*last_digit);
    n=n/10;
}
if(sum==original){
    cout<<"armstrong Number"<<endl;
}
else{
    cout<<"Not an armstrong Number"<<endl;
}
  return 0;
}