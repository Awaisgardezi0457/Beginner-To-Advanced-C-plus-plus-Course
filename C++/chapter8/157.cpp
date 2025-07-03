//find maximum element in given matrix:
#include <iostream>

using namespace std;

int main()
{
 int arr[2][2]={1,3,6,9};
 int mx=INT_MIN;
 for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        mx=max(mx,arr[i][j]);
    }
}
cout<<mx<<" ";
  return 0;
}