//print the given pattern:
//4 rows 4 column alphabhet square pattern.
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter rows:";
 cin>>n;

 for(char i=1;i<=n;i++){
    for(char j='A';j<='D';j++){//change occur only in second loop /column loop and char are printed.
        cout<<j<<" ";
     }
    cout<<endl;
 }
  return 0;
}
