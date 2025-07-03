//Break statement;
// write a Program to find the highest factor of a number 'n' (other than n itself):
#include <iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int f=1;
 for (int i=1;i<n;i++)
 {
    if(n%i==0)
    // cout<<i<<" ";
    f=i;
 }
 cout<<f;// f represents the highest multiple of number 'n'.
  return 0;
}