//calculate the factorial of a number using a for loop:
#include <iostream>

using namespace std;

int main()
{
 int n,fact=1;
 cout<<"enter number:";
 cin>>n;
 for(int i=1;i<=n;i++){
    fact*=i;

 }
 cout<<"Factorial:"<<fact<<endl;
  return 0;
}