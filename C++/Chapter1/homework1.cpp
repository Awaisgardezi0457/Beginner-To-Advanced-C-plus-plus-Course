//Volume of a sphere:
#include <iostream>
using namespace std;

int main()
{
    float volumeofsphere, pi = 22.0/7, r;
    cout << "Enter radius: ";
    cin >> r;
    volumeofsphere = (4.0/3) * pi * (r * r * r);
    cout << "Volume of sphere = " << volumeofsphere << endl;

    return 0;
}

