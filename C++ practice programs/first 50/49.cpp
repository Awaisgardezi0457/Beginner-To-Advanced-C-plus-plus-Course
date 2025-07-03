//Find the HCF (GCD) of two numbers using a loop and conditional statements (use while 
//loop with if conditions).
#include <iostream>

using namespace std;

int main()
{
  int a,b,hcf=1;
  cout<<"Enter Your Numbers:";
  cin>>a>>b;
int i=1;
while(i<=a and i<=b){
    if(a%i==0 and b%i==0){
        hcf=i; 
    }
i++;}
cout<<"HCF of "<<a<<" and "<<b<<" is : "<<hcf<<endl;
  return 0;
}
