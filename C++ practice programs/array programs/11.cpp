//Write a program the reads the array forward and backward and check If the array is palindrome.
#include <iostream>

using namespace std;

int main()
{
int arr[5]={1,2,3,2,1};
int count = 0;
for(int i=0;i<5/2;i++){
    if(arr[i]==arr[5-1-i]){
        count++;
    }
}
if(count==5/2){cout<<"palindrome"<<endl;}
else{cout<<"Not a palindrome"<<endl;}
  return 0;
}