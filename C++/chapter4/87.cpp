//print the following pattern:
//odd number triangle:
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"ENTER NUMBER:";
 cin>>n;
 for(int i=1;i<=n;i++){
    // for(int j=1;j<=2*i-1;j+=2) 
    for(int j=1;j<=i;j++){
        cout<<2*j-1<<" ";//LOGIC 2*J-1 TO MAKE ODD NUMBER TRIANGLE.
    }
    cout<<endl;
 }
  return 0;
}