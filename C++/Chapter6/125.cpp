//print n to 1.
#include <iostream>

using namespace std;
void print (int n){
    if(n==0){// base case
        return;
    }
    cout<<n<<endl;//work
    print(n-1);//call
}
int main()
{int n;
    cout<<"Enter Number:"<<endl;
    cin>>n;
print(n);
  return 0;
}
//base case is necessary in recursion.
