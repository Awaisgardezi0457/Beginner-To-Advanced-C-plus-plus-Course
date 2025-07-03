//Find the mode of the array [i.e., find the element that appears most frequently in the array]
#include <iostream>

using namespace std;

int main()
{
  int arr[7]={3,4,2,4,5,6,9};
  int mode=arr[0];
  int maxcount=0;
  for(int i=0;i<7;i++){
    int count=0;
    for(int j=0;j<7;j++){
        if(arr[j]==arr[i]){
        count++;}
    }
    if (count > maxcount){
        maxcount=count;
        mode=arr[i];
    }
  }
cout<<"Mode is : "<<mode<<endl;
  return 0;
}