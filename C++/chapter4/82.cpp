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
        if(i%2==0){// take i%2 in this situation not n.
            cout<<(char)(j+64)<<" ";
        }
        else{
            cout<<j;
        }
    }
    cout<<endl;
  }
  return 0;
}