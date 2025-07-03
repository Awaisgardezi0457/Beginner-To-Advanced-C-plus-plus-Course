//Suppose in an array there are positive and negative numbers, your task is to sperate positive 
//and negative values into two arrays.
#include <iostream>
using namespace std;

int main() {
    int arr[7] = {2, -3, 5, -6, 7, -1, 4};
    int positive[7],negative[7];
    int positive_index=0,negative_index=0;
    for (int i=0;i<7;i++){
        if(arr[i]>=0){
            positive[positive_index++]=arr[i];
        }
        else{
            negative[negative_index++]=arr[i];
        }
    }
    cout<<"Positive Numbers:";
    for(int i=0;i<positive_index;i++){
cout<<positive[i]<<" ";
    }
    cout<<endl;
        cout<<"Negative Numbers:";
    for(int i=0;i<negative_index;i++){
cout<<negative[i]<<" ";
}cout<<endl;}