//find the difference between sum of elements at even indices and sum of elements at odd indices.
#include <iostream>
using namespace std;

int main() {
    int evensum = 0, oddsum = 0;
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++) {
        if (i % 2 == 0) {  // check index, not value
            evensum += arr[i];
        } else {
            oddsum += arr[i];
        }
    }

    int difference = evensum - oddsum;

    cout << "Sum at even indices: " << evensum << endl;
    cout << "Sum at odd indices: " << oddsum << endl;
    cout << "Difference: " << difference << endl;

    return 0;
}
