#include <iostream>

using namespace std;

int main()
{
int arr[2][3];
arr[0][0]=4;
arr[0][1]=9;
arr[0][2]=12;
arr[1][0]=15;
arr[1][1]=34;
arr[1][2]=46;
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
}cout<<endl;
  return 0;
}