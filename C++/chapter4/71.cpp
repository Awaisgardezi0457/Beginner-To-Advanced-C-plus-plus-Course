// print "n" number of stars:
#include <iostream>

using namespace std;

int main()
{int m;
    cout<<"enter number of rows:";
    cin>>m;
    int n;
cout<<"enter number of columns:";
cin>>n;
//rows-->m,columns-->n=5
for (int i=1;i<=m;i++)
{//rows
    for(int j=1;j<=n;j++){//columns
        cout<<"* ";
    }
    cout<<endl;
}

  return 0;
}
//this is a loop inside loop which is termed as nested for loop.
//outside for loop is for rows and inside it is for columns.
