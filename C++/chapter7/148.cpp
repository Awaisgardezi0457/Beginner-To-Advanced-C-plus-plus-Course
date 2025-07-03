// write a program to reverse an array without using an extra array.
#include <iostream>

using namespace std;

int main()
{
int arr[5]={1,2,3,4,5};
for(int i=4;i>=0;i--){
    cout<<arr[i];
}
  return 0;
}
// this is not proper cause it doesn't reverses an array in memory.