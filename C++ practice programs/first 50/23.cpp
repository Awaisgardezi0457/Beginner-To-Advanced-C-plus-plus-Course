//Write a program to check if a number is prime or not using a for loop.
#include <iostream>

using namespace std;

int main()
{
 int n,count=0;
 cout<<"Enter Number:";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
    if(n%i==0){
        count++;
    }
 }
  if(count==2){
    cout<<n<<" number is prime "<<endl;
 }
else{
    cout<<n<<" number is composite "<<endl;
}
  return 0;
}