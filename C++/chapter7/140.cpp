//find minimum value of all elements in an array:
#include <iostream>

using namespace std;

int main()
{
 int arr[5]={1,6,3,5,3};
    int mn=arr[0];
 for(int i=0;i<5;i++){
   if (arr[i]<mn) mn=arr[i];
 }
 cout<<mn;
  return 0;
}