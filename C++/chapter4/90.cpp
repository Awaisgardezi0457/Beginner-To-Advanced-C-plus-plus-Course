// print the given pattern:
//star plus:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"ENTER NUMBER:";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(i==3 or j==3){// logic to print plus sign using steric is to use number of rows and colum  when they become equal cout<<"*".
            cout<<"*";
        }
        else{
            cout<<"#";// else what you want to print.
        }
    }
    cout<<endl;
 }
  return 0;
}