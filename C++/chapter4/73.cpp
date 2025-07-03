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
    for(int j=1;j<=n;j++){// in order to get a number square cout'j' at the end.
        cout<<j;
    }
    cout<<endl;
 }
  return 0;
}
//input=4
// output=1234
//        1234
//        1234
//        1234