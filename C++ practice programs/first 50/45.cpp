//Find the factorial of a number and check if it's even or odd (use for loop with if-else).
#include <iostream>

using namespace std;

int main()
{
int n,fact=1;
cout<<"enter your Number:";
cin>>n;
for(int i=1;i<=n;i++){
    fact*=i;
} cout<<"the factorial of "<< n << " is "<< fact <<endl;
if(fact%2==0){
    cout<<"the factorial number is even";
}
else{
    cout<<"the factorial number is odd";
}
  return 0;
}