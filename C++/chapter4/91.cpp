// print the given pattern:
//hollow rectangle:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"ENTER NUMBER:";
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
       if (i==1 or i==n or j==1 or j==n ){// if 1st row=last row or 1st column=last column 
        cout<<"* ";// don't use endl after this
       }
       else{
        cout<<"  ";// two spaces for alignment
       }
    }
    cout<<endl;
 }
  return 0;
}