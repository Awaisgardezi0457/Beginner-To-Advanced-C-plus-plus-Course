//Take 3 positive integers input and print the least of them:
#include <iostream>

using namespace std;

int main()
{
 int a,b,c;
cout<<"enter num1:";
 cin>>a;
cout<<"enter num2:";
 cin>>b;
 cout<<"enter num3:";
 cin>>c;
 if(a<b and a<c)
 {cout<<a<<" is the least";}
 else if (b<a and b<c)
 {
  cout<<b<<"is the least";  
 }
 else {
    cout<<c<<" is the least";
 }
}