// print a alphabhet triangle:
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
        cout<<(char)(j+64)<<" ";// we can do this by type-casting the value. and use 96 to type-cast lowerase letters.
    }
    cout<<endl;
  }
  return 0;
}