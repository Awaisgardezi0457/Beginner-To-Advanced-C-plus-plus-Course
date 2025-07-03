//print the following pattern:
//floyd's triangle:

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "ENTER NUMBER:";
    cin >> n;
    int a = 1; // initialize a=1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) { // j<=i to print triangle
            cout << a << " "; // print 'a'
            a++; // increment 'a'
        }
        cout << endl;
    }
    return 0;
}
