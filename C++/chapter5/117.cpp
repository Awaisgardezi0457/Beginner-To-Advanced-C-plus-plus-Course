//pass by value and pass by reference:
// swap by functions:
#include <iostream>
using namespace std;
void swap(int x,int y){
    int t=x;
    x=y;
    y=t;
}
int main()
{
  int x=12,y=45;
  cout<<x<<" "<<y;
  swap(12,45);
  cout<<x<<" "<<y;
}
// as swap function was pass by value so it didn't swap the function.
// in pass by values,the actual functions does not move to another function just their values move.
 