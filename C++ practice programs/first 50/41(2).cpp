#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int a = 0, b = 1, c;

    cout << "Fibonacci series up to " << n << " terms:\n";

    for (int i = 1; i <= n; i++) {
        // Print the number
        cout << a;

        // Check if it's even or odd
        if (a % 2 == 0) {
            cout << " (Even)";
        } else {
            cout << " (Odd)";
        }

        cout << endl;

        // Generate next term using c
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
