//print the following pattern:
//star triangle reverse:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"ENTER NUMBER:";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){// this loop is used for spaces j<=n-i to print opposite side
      cout<<"  ";
    }
    for(int k=1;k<=i;k++){// stars 
        cout<<"* ";
    }
    cout<<endl;
 }
  return 0;
}