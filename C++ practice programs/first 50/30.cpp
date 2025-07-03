// Write a program to calculate the sum of the first N natural numbers using a do-while loop.
#include <iostream>

using namespace std;

int main()
{
 int n,sum=0,i=1;
cout<<"enter number:";
cin>>n;
do{
sum+=i;
i++;
}while(i<=n);
cout<<"sum of first natural numbers:"<< n <<"is:"<<sum;
  return 0;
} 
