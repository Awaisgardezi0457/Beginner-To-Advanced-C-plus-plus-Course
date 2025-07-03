// print a number triangle:
#include <iostream>

using namespace std;

int main()
{
  int n;
  cout<<"enter number:";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++){
        cout<<j;// in order to print number triangle we have to just cout<<j; rest logic remains same as j<=i not n.
    }
    cout<<endl;
  }
  return 0;
}