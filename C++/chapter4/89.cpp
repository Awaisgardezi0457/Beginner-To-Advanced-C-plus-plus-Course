// print the given pattern:
// 0 and 1 traiangle:
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER NUMBER:";
    cin >> n;
  
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { 
            if((i+j)%2==0){// in this logic sum of rows and columns is used.if their sum is even we cout<<1; and when their sum is odd we cout<<0;
             cout<<1;
                }
           else{
            cout<<0;
           }
        }
        cout << endl;
    }
    return 0;
}