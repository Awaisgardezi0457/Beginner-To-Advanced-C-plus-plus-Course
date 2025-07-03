// Modulus Operator:
/*
this operator is used to give the remainder after division. 
a%b is remainder when a is divided by b. 
*/
#include <iostream>

using namespace std;

int main()
{
int x=3,y=8;
cout<<"the remainder is:";
cout<<x%y<<endl;
  return 0;
}
/*
Important points:
1)a%b = a if(a<b)
2)a%a= 0 
3)if a is factor of b then a%b will have remainder zero. 
4)a%(-b)=a%b
5)(-a)%b=-[a%b]
*/
