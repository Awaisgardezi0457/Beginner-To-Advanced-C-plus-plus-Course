//print the factorial of a given number 'n':
// in factorial and sum the condition is always i<=n.
//factorial is always by found by multiplying the fact value with i.
#include <iostream>

using namespace std;

int main()
{
  int n,i=1,fact=1;
  cout<<"Enter your number:";
  cin>>n;
  while(i<=n){
  fact*=i;
  i++; }
  cout<<fact;
  return 0;
}