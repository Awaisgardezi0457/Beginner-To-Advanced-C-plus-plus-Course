//print the following pattern:
// star triangle in reverse:
//star triangle horizontal flipping:
#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"enter number:";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++)
    {// logic is n-i+1, we will reduce rows from number with increment of 1.
        cout<<"* ";
    }
    cout<<endl;
}
  return 0;
}