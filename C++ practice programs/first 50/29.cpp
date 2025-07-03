//Write a program to check if a number is prime or not using a do-while loop.
#include <iostream>

using namespace std;

int main()
{
int n,i=1,count=0;
cout<<"enter Number:";
cin>>n;
 if(count==0){
        cout<<"the number is prime"<<endl;
    }
    else{
        cout<<"the number is composite"<<endl;
    }
do
{
    if (n%i==0){
        count++;
    }
} while (i<=n);

  return 0;
}