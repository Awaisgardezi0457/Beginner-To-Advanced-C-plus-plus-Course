//print 1 to N (parametrized):
#include <iostream>
using namespace std;
int sum(int n) {
   
    if (n == 1) {
        return 1;
    }
   
    return n + sum(n - 1);
}

int main() {
    int N;

    cout << "Enter a positive integer N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 1;
    }
    int result = sum(N);
    cout << "Sum from 1 to " << N << " is: " << result << endl;

    return 0;
}
