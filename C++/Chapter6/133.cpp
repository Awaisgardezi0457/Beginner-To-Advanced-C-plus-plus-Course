//Multiple calls in recursion:
#include <iostream>

using namespace std;
int fibo(int n){
    if (n==1||n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main()
{
int n;
cout<<"Enter N:";
cin>>n;
cout<<fibo(n);
  return 0;
}
// in dry run,we can guess that its execution is like Euler's tour tree.
