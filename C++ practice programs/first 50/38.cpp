//Check if a number is a Strong number (use for loop and if condition).
#include <iostream>

using namespace std;
int fact(int m){
   
  int fact=1;
   
    for (int i=1;i<=m;i++){
fact*=i;
    }
    return fact;
}
int main()
{
  int n,last_digit,sum=0;
  cout<<"Enter your Number:";
  cin>>n;
  int original=n;
  while(n>0){
last_digit=n%10;
sum=sum+fact(last_digit);
n=n/10;
  }
  
  if(sum==original){
    cout<<"strong Number";
  }
  else{
    cout<<"not a strong number";
  }
  return 0;
}