// Display this Geometric Progression- 1,2,4,8,16,32,....upto 'n' terms:
#include <iostream>

using namespace std;

int main()
{
 int i,n,a;
 cin>>n;
 a=1;// starting value
 for(i=1;i<=n;i++)
 {
cout<<a<<" ";// cause is being incremented we'll use a as cout.
 a=a*2;// while 2 is jumping value.
 }
  return 0;
}