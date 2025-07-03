//if an array contains n elements,then check if the given array is a palindrome or not:
#include <iostream>

using namespace std;

int main()
{
    int count=0;
 int arr[5]={1,2,3,2,1};
 for(int i=0;i<5/2;i++){
   if (arr[i]=arr[5-1-i]){
    count++;
   }}
   if (count==5/2){
    cout<<"this is a palindrome";
   }
   else{
    cout<<"this is not a palindrome";
   }
  return 0;
}