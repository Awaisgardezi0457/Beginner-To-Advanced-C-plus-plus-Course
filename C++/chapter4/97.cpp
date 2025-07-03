#include <iostream>
using namespace std;

int main() {
    int n;  // Number of pyramid levels
cout<<"enter number:";
cin>>n;
    for (int i = 1; i <= n; i++) {
        // Print spaces
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++) {// in this we use logic of (2*i-1)
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
