//calculate the product of all elements in a given array:
#include <iostream>

using namespace std;

int main()
{int product=1;
  int arr[5]={1,3,5,7,5};
  for(int i=0;i<5;i++){
    product*=arr[i];
  }
  cout<<product<<endl;
  return 0;
}