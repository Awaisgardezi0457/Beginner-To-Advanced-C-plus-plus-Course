//print the following pattern:
//rhombus:
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){// use j<=n as it is use to print square if i use 'i' it'll print a triangle.
            cout<<"*";
        }
cout<<endl;
    }
  return 0;
}
