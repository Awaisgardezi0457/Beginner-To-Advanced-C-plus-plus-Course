// Display this Geometric Progression- 5,15,45......upto 'n' terms:
#include <iostream>

using namespace std;

int main()
{
 int i,n,a;
 cin>>n;
 a=5;// starting value
 for(i=1;i<=n;i++)
 {
cout<<a<<" ";// cause is being incremented we'll use a as cout.
 a=a*3;// while 2 is jumping value.
 }
  return 0;
}