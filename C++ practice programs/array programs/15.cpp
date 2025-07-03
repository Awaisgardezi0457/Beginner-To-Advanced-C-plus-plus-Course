//Take two arrays and replace their values with the squares of the elements and cube of the 
//elements.
#include <iostream>

using namespace std;

int main()
{
 int arr1[5]={1,2,3,4,5};
 int arr2[5]={6,7,8,9,10};
 for(int i=0;i<5;i++){
    arr1[i]=arr1[i]*arr1[i];
 }
 for(int i=0;i<5;i++){
    arr2[i]=arr2[i]*arr2[i]*arr2[i];
 }
 cout<<"squares:"<<endl;
 for(int i=0;i<5;i++){
    cout<<arr1[i]<<" ";
   
 } cout<<endl;
 cout<<"cubes:"<<endl;
 for(int i=0;i<5;i++){
    cout<<arr2[i]<<" ";
   
 }cout<<endl;
  return 0;
}