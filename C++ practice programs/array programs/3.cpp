//find maximum and minimum alue in array:
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={23,11,4,56,33};
  int maximum=INT_MIN;
  for(int i=0;i<5;i++){
    maximum=max(maximum,arr[i]);
  }
  cout<<maximum<<endl;
int minimum=INT_MAX;
  for(int i=0;i<5;i++){
    minimum=min(minimum,arr[i]);
  }
  cout<<minimum;
  return 0;
}