//given the length and breadth of a rectangle.
//write a program to find whether the area of rectangle is greater than its perimeter.

#include <iostream>

using namespace std;

int main()
{
 int length,breadth,areaofrec,perimeterofrec;
 cout<<"length of rectangle is:";
 cin>>length;
 cout<<"breadth of rectangle is:";
 cin>>breadth;
 areaofrec=length * breadth;
 cout<<"area of rectangle is:"<<areaofrec;
 perimeterofrec=2*(length+breadth);
 cout<<"perimeter of rectangle is:"<<perimeterofrec;
 if(areaofrec>perimeterofrec)
 {cout<<"area of rectangle is greater than its perimeter";}
 else
 {cout<<"area of rectangle is less than its perimeter";}
  return 0;
}