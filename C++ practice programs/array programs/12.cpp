//Write a program that prints the occurrence (i.e., frequency) of an element in an array
#include <iostream>

using namespace std;

int main()
{
int arr[6]={3,54,35,3,4,4};
int n,count=0;
cout<<"enter number of elements:";
cin>>n;
for(int i=0;i<6;i++){
    if(arr[i]==n){
        count++;
    }
}cout<<"The occurence of "<<n<<" is "<<count<<" times ."<<endl;
return 0;
}