//Write a program to check whether a number is composite or not:
// a number is composite if it is has more factors except and itself.
#include <iostream>

using namespace std;

int main()
{int i,n;
    cin>>n;
    bool flag = true;// number is prime.
    for(i=2;i<n/2;i++)
    {
        if(n%i==0){
          flag=false;//false means composite
            break;}
        }
        if(n==1) cout<<"Neither Prime Nor Composite";
        else if(flag==true) cout<<"Prime";
        else cout<<"composite";
    
  return 0;
}