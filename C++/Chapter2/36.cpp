// if the ages of ahmad,munim and aryan are input through the keyboard,
//write a program to determine the youngest of the three:
#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter Ahmad's age: ";
    cin >> a;

    cout << "Enter Munim's age: ";
    cin >> b;

    cout << "Enter Aryan's age: ";
    cin >> c;

    if (a < b) {
        if (a < c) {
            cout << "Ahmad is the youngest with age " << a << "." << endl;
        } else {
            cout << "Aryan is the youngest with age " << c << "." << endl;
        }
    } else {
        if (b < c) {
            cout << "Munim is the youngest with age " << b << "." << endl;
        } else {
            cout << "Aryan is the youngest with age " << c << "." << endl;
        }
    }

    return 0;
}
