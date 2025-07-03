//Search for a specific element in the array and return the particular index where the element 
//found:
#include <iostream>

using namespace std;

int main()
{
int arr[5]={23,45,56,63,6};
int n;
cout<<"Enter your Element:";
cin>>n;
for(int i=0;i<5;i++){
    if(arr[i]==n){
        cout<<"The index Of The number is:";
        cout<<i<<endl;
    }
}
  return 0;
}