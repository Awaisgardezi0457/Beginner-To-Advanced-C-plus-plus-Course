//  Split the array into two arrays and even and odd respectively
#include <iostream>

using namespace std;

int main()
{
  int arr[5]={3,8,5,10,7};
  cout<<"Even Numbers:";
  for(int i=0;i<5;i++){
    if(arr[i]%2==0){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}
    cout<<"Odd Numbers:";
for(int i=0;i<5;i++){
  if(arr[i]%2 != 0){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  }
  return 0;
}