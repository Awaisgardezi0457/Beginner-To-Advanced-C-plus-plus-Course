//Write a C++ program that reads from a text file and displays it.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("myfile.txt");   // Open file for reading

    string text;                   // Variable to store each word

    while (file >> text) {         // Read word by word
        cout << text << " ";       // Display each word with a space
    }

    file.close();                  // Close the file
    return 0;
}
