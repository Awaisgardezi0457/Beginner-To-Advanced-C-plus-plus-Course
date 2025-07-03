//print the following pattern:
//star cross:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"ENTER NUMBER:";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       if (i==j or i+j==n+1 ){
        cout<<"*";
       }
       else{
        cout<<" ";
       }
    }
    cout<<endl;
 }
  return 0;
}//When row index = column index → print *

//When row index + column index = size + 1 → print *

//Else → print space