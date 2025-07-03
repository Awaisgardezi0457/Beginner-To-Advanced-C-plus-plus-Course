//find maximum element in given matrix:
#include <iostream>

using namespace std;

int main()
{
 int arr[2][2]={1,3,6,9};
 int mn=INT_MAX;
 for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        mn=min(mn,arr[i][j]);
    }
}
cout<<mn<<" ";
  return 0;
}