//Find the sum of digits of a number and check if it’s prime (use while loop with if 
//condition).
#include <iostream>

using namespace std;

int main()
{
 int n,i=1,sum=0,last_digit,count=0;
 cout<<"enter number:";
 cin>>n;
 int temp=n;
 while(temp>0){
last_digit=temp%10;
sum+=last_digit;
temp=temp/10;
 }
 if(sum%i==0)
count++;
cout<<"the sum of digits is:"<<sum<<endl;
if (count==2)
{cout<<"prime";}
else{
    cout<<"composite";
}
 }
  