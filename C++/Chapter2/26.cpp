//Take 3 positive integers input and print the greatest of them:
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
 if(a>b and a>c)
 {cout<<a<<" is the greatest";}
 else if (b>a and b>c)
 {
  cout<<b<<"is the greatest";  
 }
 else {
    cout<<c<<" is the greatest";
 }
}