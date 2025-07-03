//give an integer n.Create an array containing squares of all natural numbers till n
//and print the elements of array:
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter arr size:" << endl;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = (i + 1) * (i + 1);
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
