//print 1 to N without extra parameter:
//print n to 1.
#include <iostream>

using namespace std;
void print (int n){
    if(n==0){// base case
        return;
    }
   print(n-1);
    cout<<n<<endl;//work
}
int main()
{int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
print(n);
  return 0;
}