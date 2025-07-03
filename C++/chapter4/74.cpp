//print the given pattern:
//4 rows 4 column number pattern.
#include <iostream>

using namespace std;

int main()
{
 int n,sum=1;
 cout<<"enter rows:";
 cin>>n;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<i<<" ";//in order to print same numbers in same line cout<<i;.
    }
    cout<<endl;
 }
  return 0;
}
