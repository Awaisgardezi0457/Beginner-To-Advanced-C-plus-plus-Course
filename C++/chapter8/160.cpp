//find the product of all elements in given matrix:
#include <iostream>

using namespace std;

int main()
{
    int arr[2][2]={1,5,6,9};
    int product=1;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            product*=arr[i][j];
        }
    }cout<<product;
  return 0;
}