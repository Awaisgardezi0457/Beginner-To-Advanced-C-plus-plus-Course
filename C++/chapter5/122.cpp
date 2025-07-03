//De-Reference Operator:
#include <iostream>

using namespace std;

int main()
{
    int x=12;
int* ptr=&x;
cout<<x<<endl;
*ptr=23;//changing value of x using de-reference operator.
cout<<x<<endl;
  return 0;
}