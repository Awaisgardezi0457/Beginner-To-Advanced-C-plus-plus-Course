//simple interest using the formula((P*R*T)/100):
#include <iostream>

using namespace std;

int main()
{
 int simpleinterest,principle,rate,time;
 cout<<"Principle:";
 cin>>principle;
 cout<<"Rate:";
 cin>>rate;
 cout<<"Time:";
 cin>>time;
 simpleinterest=((principle*rate*time)/100);
 cout<<simpleinterest;
  return 0;
}