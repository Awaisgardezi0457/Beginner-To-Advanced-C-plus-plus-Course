//write a program to add two matrices:
#include <iostream>
using namespace std;

int main()
{
    int arr_a[2][3] = {9, 4, 2, 0, 1, 7};
    int arr_b[2][3] = {2, 1, 6, 5, 9, 4};
    int arr_c[2][3];


    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            arr_c[i][j] = arr_a[i][j] + arr_b[i][j];
        }
    }

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << arr_c[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
