//print the given pattern(solid square):
// 4 rows and 4 columns
#include <iostream>

using namespace std;

int main()
{
 int m=4,n=4;
//  cout<<"number of rows:";
//  cin>>m;
//  cout<<"number of columns:";
//  cin>>n;
 for(int i=1;i<=m;i++){//always initialize 'i' and 'j' value.
    for(int j=1;j<=n;j++){
        cout<<"* ";
    }
    cout<<endl;//necessary
 }
  return 0;
}