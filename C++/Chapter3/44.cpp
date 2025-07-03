//Display this Arithematic Progression of 1,3,5,7,9....... upto "n" times.
//Arithematic progression is like puzzles that we have to use logic to guess what next number would be.
//Method No:1 (maths)
/*
nth term formula: 
a^n=a+(n-1)d
which is simplified to: 
a^n=2n-1
*/
#include <iostream>

using namespace std;

int main()
{
  int n,i;
  cin>>n;
  for(i=1;i<=2*n-1;i+=2)
  cout<<i<<" ";
  return 0;
}