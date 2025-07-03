//Write a program to print all the ASCII values and their equivalent characters of 26 alphaphets
//using while loop:
#include <iostream>

using namespace std;

int main()
{int i=0,n;
    cout<<"enter number:";
    cin>>n;
while(i<=n)
{
    cout<<i<<"="<<char(i)<<endl;// typecasting techniques remember as you've studied in basics.
    i++;
}

  return 0;
}