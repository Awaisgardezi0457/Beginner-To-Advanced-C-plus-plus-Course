#include <iostream>
using namespace std;

// Function to check if a number is prime
int isprime(int n) {
    if (n < 2) return 0; // 0 and 1 are not prime
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n1, n2;
    cout << "Enter First number: ";
    cin >> n1;
    cout << "Enter Second number: ";
    cin >> n2;

    cout << "Prime numbers from " << n1 << " to " << n2 << " are: ";

    for (int i = n1; i <= n2; i++) {
        if (isprime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
