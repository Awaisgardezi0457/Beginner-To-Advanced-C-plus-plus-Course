// write a program to copy the contents of one array into another in reverse order:
#include <iostream>

using namespace std;

int main()
{
  int a[5]={1,2,3,4,5};
  int n =sizeof(a)/4;
  int b[n];
  for (int i=0;i<5;i++){
    
    b[i]=a[n-1-i];
    cout<<b[i]<<endl;
  }
  return 0;
}