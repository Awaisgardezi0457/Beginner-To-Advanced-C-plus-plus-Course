//Take 3 numbers as input and tell if they can be the sides of a triangle.
#include <iostream>

using namespace std;

int main()
{
 int x,y,z;
 cin>>x;
 cin>>y;
 cin>>z;
 if( x+y>z and y+z> x and z+x>y )
 {cout<<"these are sides of triangle";}
 else
 {cout<<"not sides of triangle";}
  return 0;
}