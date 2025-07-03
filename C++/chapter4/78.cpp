// print the given pattern:
//star triangle;
//here,we start using loops mechanics.
// in this case our inner loop is variable and will run twice.
// in order to print star triangle the inner loop runs j<=i times.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Star triangle pattern
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {// here our logic is that j<=i then it will print our pattern.
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
