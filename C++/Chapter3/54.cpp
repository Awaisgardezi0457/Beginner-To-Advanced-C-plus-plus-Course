//Continue Statement:
//It is used if you want to skip a round.
//Print Numbers from 1 to 20 except 3 and 8.
#include <iostream>

using namespace std;

int main()
{int i;
    for(i=1;i<=20;i++)
    {
        if(i==3 or i==8){
        continue;}// it can also be done separately.
    //    if(i!=3 and i!=8)
        cout<<i<<" ";
    }
 
  return 0;
}