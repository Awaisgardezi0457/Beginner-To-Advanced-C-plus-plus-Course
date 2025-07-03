//Pass by reference:
// swap by functions:
#include <iostream>
using namespace std;
void swap(int& x,int& y){//just by adding int& we get our value pass by reference and values are swapped.
    int t=x;
    x=y;
    y=t;
}
int main()
{
  int x=12,y=45;
  cout<<x<<" "<<y<<endl;
  swap(x,y);
  cout<<x<<" "<<y<<endl;
}