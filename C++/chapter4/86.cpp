//print the following pattern:
// same number on same linetriangle in reverse:
// triangle horizontal flipping:
#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"enter number:";
cin>>n;
for(int i=n;i>=1;i--)// use i is greater than equal to 1.
{
     for(int j=n;j>=i;j--)//use logic j>=i then opposite number reversing would be done.
    {
        cout<<j<<" ";
    }
    cout<<endl;
}//here we are using reverse increment operator.
}