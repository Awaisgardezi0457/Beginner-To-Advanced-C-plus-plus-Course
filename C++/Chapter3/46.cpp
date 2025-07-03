//Display this AP- 4,7,10,13,16...... upto "n" terms.
// method#2
// using extra variable and using i for iterations
//iterations are the number of rounds a loop repeats its vaue.
#include <iostream>

using namespace std;

int main()
{int n,i,a;
    cin>>n;
    a=4;
    for (i=1;i<=n;i++)
    {
       cout<<a<<" ";
       a+=3;
    }
   
  return 0;
}
// in this way arithematic progression can also be performed. by using a third value. 
