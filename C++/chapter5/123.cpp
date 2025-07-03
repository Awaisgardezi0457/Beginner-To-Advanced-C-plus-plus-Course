//swap using Pointers:
#include <iostream>
using namespace std;
void swap(int* x,int* y){
    int t=*x;
    *x=*y;
    *y=t;
}
int main()
{
  int x=12,y=45;
  cout<<x<<" "<<y<<endl;
  swap(&x,&y);
  cout<<x<<" "<<y;
}