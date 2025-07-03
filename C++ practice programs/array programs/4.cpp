//Find the second largest and second smallest number in an array.
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={2,0,6,8,9};
  int n=sizeof(arr)/4;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
  }
  cout<<"the second smallest Number is:"<<arr[1]<<endl;
  cout<<"the second largest Number is:"<<arr[n-2]<<endl;
  return 0;
}