// calculate simple interest:
#include <iostream>

using namespace std;

int main()
{
  float simpleinterest,principle,rate,time;
  cout<<"Enter Principle:";
  cin>>principle;
  cout<<"Enter rate:";
  cin>>rate;
  cout<<"Enter Time";
  cin>>time;
  simpleinterest=(principle*rate*time)/100;
  cout<<simpleinterest;
  return 0;
}

