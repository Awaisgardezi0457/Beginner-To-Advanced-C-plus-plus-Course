//print the following pattern:
// number triangle in reverse:
//number triangle horizontal flipping:
#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"enter number:";
cin>>n;
for(int i=1;i<=n;i++)
{
     for(int j=1;j<=n-i+1;j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
}
}