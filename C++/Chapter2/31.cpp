//Given a point (x,y),write a program to find out if it lies in 1st quadrant,2nd quadrant
//,3rd quadrant,4th quadrant,on x-axis,y-axis or at origin viz.(0,0).
#include <iostream>

using namespace std;

int main()
{
 int x,y;
 cout<<"enter x:";
 cin>>x;
 cout<<"enter y:";
 cin>>y;
 if(x ==0 and y==0){
 cout<<"the point lies at origin";}
 else if (x==0)
 {
  cout<<"the point lie on y-axis";  
 }
 else if (y==0)
 {
    cout<<"the point lies on x-axis";
 }
 else if (x>0 and y>0)
 {
    cout<<"the point lies in 1st quadrant";
 }
 else if (x<0 and y>0)
 {
    cout<<"the point lies in 2nd quadrant";
 }
 else if (x>0 and y<0)
 {
    cout<<"The point lies in 3rd quadrant";
 }
 else
 {
    cout<<"the point lies in 4th quadrant";
 }
  return 0;
}