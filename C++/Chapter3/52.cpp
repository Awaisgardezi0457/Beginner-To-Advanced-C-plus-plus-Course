// write a Program to find the highest factor of a number 'n'backwards (other than n itself):
#include <iostream>

using namespace std;

int main()
{
 int n;
 cin>>n;
 int f=1;
 for (int i=n/2;i>=1;i--)
 {
    if(n%i==0){
    // cout<<i<<" ";
    f=i;
    break;// to get out of the loop immediately. 
 }
}
 cout<<f;// f represents the highest multiple of number 'n'.
  return 0;
}