//print 1 to N (parametrized):
#include <iostream>

using namespace std;
int sum(int n){
if (n==0){
    return 0;
}
return n+sum(n-1);
}
int main()
{
int n;
cout<<"Enter Number:";
cin>>n;
if(n<=0){
    cout<<"Please Enter a Number Greater Than Zero 0"<<endl;
return 1;
}
int result=sum(n);
cout<<"the Sum From 1 to "<<n<<" is:"<<result<<endl;
  return 0;
}