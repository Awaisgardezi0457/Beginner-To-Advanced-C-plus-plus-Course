// nested if-else statements:
//Take 3 positive integers input and print the greatest of them without using multiple conditions:
// nested if statements
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Enter num1: ";
    cin >> a;
    cout << "Enter num2: ";
    cin >> b;
    cout << "Enter num3: ";
    cin >> c;

    if (a > b) {  // If a is greater than b
        if (a > c)
            cout << a << " is the greatest";
        else  // c > a
            cout << c << " is the greatest";
    }
    else {  // b >= a
        if (b > c)
            cout << b << " is the greatest";
        else  // c >= b
            cout << c << " is the greatest";
    }

    return 0;
}
