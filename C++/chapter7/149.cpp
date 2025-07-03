// write a program to reverse an array without using an extra array.
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={1,3,4,5,6};
  int n=sizeof(arr)/4;
for(int i=0;i<n/2;i++){
    int temp=arr[i];
    arr[i]=arr[n-1-i];
    arr[n-1-i]=temp;
}
cout<<"Reversed Array:";
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
  return 0;
}