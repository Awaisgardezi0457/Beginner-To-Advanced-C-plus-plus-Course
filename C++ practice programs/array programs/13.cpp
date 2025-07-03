//Find the median value of array [ A median is a middle value after sorting]:
#include <iostream>

using namespace std;

int main()
{
 int arr[5]={12,3,4,9,6};
 int temp;
 for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j])
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
 }
 int median = arr[5/2];
 cout<<"Median Value Is: "<<median<<endl;
  return 0;
}