//Calculate the sum of all elements in a given array:
#include <iostream>

using namespace std;

int main()
{
     int sum=0;
int arr[5]={1,4,8,9,4};
for(int i=0;i<5;i++){
    sum+=arr[i];
}cout<<sum<<endl;
  return 0;
}