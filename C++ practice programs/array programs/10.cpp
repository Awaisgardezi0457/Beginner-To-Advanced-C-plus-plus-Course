//Sort the values of array in ascending and descending order:
#include <iostream>

using namespace std;

int main()
{
int arr[5]={2,4,7,3,5};
int temp;
for (int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"Ascending:";
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    cout<<endl;

}
for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
        if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
}
cout<<"Descending:";
for (int i=0;i<5;i++){
    cout<<arr[i]<<" ";
    cout<<endl;
}
  return 0;
}