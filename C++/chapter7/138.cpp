//find maximum value of all elements in an array:
#include <iostream>

using namespace std;

int main()
{
 int arr[5]={1,6,3,5,3};
    int mx=arr[0];
 for(int i=0;i<5;i++){
   if (arr[i]>mx) mx=arr[i];
 }
 cout<<mx;
  return 0;
}