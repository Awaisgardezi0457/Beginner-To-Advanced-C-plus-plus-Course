//print sum 1 to 'n':
#include <iostream>

using namespace std;

int main()
{
  int n,sum=0;
  cout<<"Enter your number:";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
     sum+=i;
  }
  cout<<sum;
  return 0;
}