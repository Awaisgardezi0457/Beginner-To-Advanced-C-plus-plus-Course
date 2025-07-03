//Write a program to calculate the power of a number using a do-while loop.
#include <iostream>

using namespace std;

int main()
{
int n,m,i=1,prod=1;
cout<<"enter number:";
cin>>n;
cout<<"enter power:";
cin>>m;
do{i++;
prod=prod*n;

}while(i<=m);
cout<<"final calculated value is:"<<prod;
  return 0;
}