//Write a Program to print odd numbers from 1 to 100 using continue statement:
#include <iostream>

using namespace std;

int main()
{
 int i;
 for (i=1;i<=100;i++)
 {
    if (i%2==0)
    continue;
    else
    cout<<i<<" ";
 }
  return 0;
}