//calculate average of all numbers in an array:
#include <iostream>

using namespace std;

int main()
{
 int arr[8]={1,2,3,4,5,8,9,17};
 int sum=0;
 for(int i=0;i<8;i++){
    sum+=arr[i];
 }
 int average=sum/8;
 cout<<average<<endl;
  return 0;
}