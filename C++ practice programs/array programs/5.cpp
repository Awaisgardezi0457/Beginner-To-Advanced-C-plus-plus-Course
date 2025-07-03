// Write a program that counts even and odd numbers.
#include <iostream>
using namespace std;

int main() {
    int even = 0, odd = 0;
  int arr[5]={2,5,3,7,6};
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd << endl;

    return 0;
}
