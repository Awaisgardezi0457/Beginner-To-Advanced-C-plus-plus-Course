//take positive integer as input and tell if it is divisible by 5 or 3 and is not divisble by 15:
#include <iostream>

using namespace std;

int main()
{
  int x;
  cin>>x;
  // if(x%5==0 || x%3==0)
  if(x%5==0 or x%3==0 and (x%15!=0)){
    cout<<"the number is divisible by 5 or 3 ";
  }
  else{cout<<"the number is not divible by 5 or 3 and is divisible by 15";}
  return 0;
}