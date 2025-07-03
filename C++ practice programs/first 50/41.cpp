//Display the Fibonacci series up to N terms and check if each number is even or odd (use 
//for loop with if-else)
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter Number:";
    cin>>n;
 int a=0,b=1,c;
cout<<"Fibonacci Series Upto"<<n<<"terms is:";
for(int i=1;i<=n;i++){
    cout<<a;
}
if(a%2==0){
    cout<<"Even";
}
else{
    cout<<"odd";
}
cout<<endl;
c=a+b;
a=b;
b=c;
  return 0;
}