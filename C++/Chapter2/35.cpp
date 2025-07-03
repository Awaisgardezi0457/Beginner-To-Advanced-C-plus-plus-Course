// practice question:
#include <iostream>

using namespace std;

int main()
{
int x=3,y,z;
y=x=10;// in heirarchy or precedence "=" operator moves from right to left.
z=x<10;// < has more precendence than "=" so first "<" value will be executed.
// in computer precedence,false means zero and True means 1.So zero,occurs in z.
cout<<x<<" "<<y<<""<<" "<<z;
  return 0;
}