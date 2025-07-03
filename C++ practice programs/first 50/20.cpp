//Write a program to calculate the sum of the first N natural numbers using a for loop.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
   int sum=0;
 for(int i=1;i<=n;i++){
    sum+=i;
 }
 cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
  return 0;
}