//1. Write a program that calculates the sum of all elements in the array
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={1,2,3,4,5};
  int sum=0;
  for(int i=0;i<5;i++){
    sum+=arr[i];
  }
  cout<<sum<<endl;
  return 0;
}