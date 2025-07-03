//find second largest element in an array:
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={1,2,4,5,6};
  int n=sizeof(arr)/4;
  for(int i=0;i<5;i++){
    for(int j=i+1;j<n;j++){
        if (arr[j]<arr[i]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
     cout<<"the second smallest number is:"<<arr[1]<<endl;
    cout<<"the second largest number is:"<<arr[n-2]<<endl;
     return 0;
  }
}