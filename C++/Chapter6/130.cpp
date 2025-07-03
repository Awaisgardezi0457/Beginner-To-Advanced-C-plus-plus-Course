//print 1 to N (return_type):
#include <iostream>

using namespace std;
int sum(int n){
    if (n==1) return 1;
    return n+sum(n-1);// it is the sum of n and sum before n.
}
int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
sum(n);
  return 0;
}