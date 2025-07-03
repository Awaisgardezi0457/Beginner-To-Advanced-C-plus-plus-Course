//print the given pattern:
//4 rows 4 column alphabhet square pattern.
//Method#2
#include <iostream>

using namespace std;

int main()
{
 int n;
 cout<<"enter rows:";
 cin>>n;

 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<(char)(j+96)<<" ";//we can do it by typecasting though.64 for Capital alphabets.it basically depends upon ascii value.
    }//96 for lower-case alphabets
    cout<<endl;
 }
  return 0;
}
