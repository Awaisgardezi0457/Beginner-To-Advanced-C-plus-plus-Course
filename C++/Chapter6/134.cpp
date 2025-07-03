// power function (logarithmic):
#include <iostream>

using namespace std;

int power(int base, int exponent) {
    if (exponent == 0) return 1;
    int halfpower = power(base, exponent/2);
    if (exponent % 2 == 0) {
        return halfpower * halfpower;
    } else {
        return base * halfpower * halfpower;
    }
}

int main() {
    int base, exponent;
    cout << "Enter base:";
    cin >> base;
    cout << "Enter exponent:";
    cin >> exponent;
    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}