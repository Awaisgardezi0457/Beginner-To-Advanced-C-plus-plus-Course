//print the following pattern:
// alphabet triangle in reverse:
//alphabet triangle horizontal flipping:
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
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
}
}