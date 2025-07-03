//calculate area of circle (pi*r^2):
#include <iostream>
#include<cmath>
using namespace std;

int main()
{int pi=3.1416,r,areaofcirc;
  cout<<"enter radius:"<<endl;
cin>>r;
areaofcirc=pi*pow(r,2);
cout<<areaofcirc;
  return 0;
}