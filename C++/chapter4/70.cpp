// pattern printing through loops:
//mostly uses for loops and nested loops but can be done using while loop.
// basically,we have to make a rectangle for m*n star rectangle.
//m is equal to number of rows.n is number of columns.
#include <iostream>

using namespace std;

int main()
{int m;
    cout<<"enter number of rows:";
    cin>>m;
//rows-->m,columns-->n=5
for (int i=1;i<=m;i++){//rows
    cout<<"****"<<endl;
}

  return 0;
}

