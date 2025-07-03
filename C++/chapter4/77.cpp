//print the given pattern:
//4 rows 4 column alphabhet square pattern.
// same alphabhet on single line
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter rows:";
 cin>>n;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
 }
  return 0;
}