//Write a program to display the multiplication table of a given number using a for loop.
#include <iostream>

using namespace std;

int main()
{
  int n,product;
  cout<<"Enter Number:";

  cin>>n;
  for (int i=0;i<=10;i++){
    product=n*i;
cout<<n<<"x"<<i<<"="<<product<<endl;
}
  return 0;
}