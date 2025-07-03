//take positive integer as input and tell if it is divisible by 5 and 3:
// the table of 15 is used to check this cause 3*5=15.
#include <iostream>

using namespace std;

int main()
{
  int x;
  cin>>x;
  if(x%5==0 and x%3==0){
    cout<<"the number is divisible by 5 and 3";
  }
  else{cout<<"the number is not divible by 5 and 3";}
  return 0;
}