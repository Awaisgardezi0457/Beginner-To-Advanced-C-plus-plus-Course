//Display this AP- 4,7,10,13,16...... upto "n" terms.
// can be calculated by formula a^n=a+(n-1)d a:starting value d:jumping value.
#include <iostream>

using namespace std;

int main()
{int n,i;
    cin>>n;
    for(i=4;i<=3*n+1;i+=3)
    {
        cout<<i<<" ";
    }
 
  return 0;
}