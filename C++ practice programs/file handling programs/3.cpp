//71. Write a C++ program that finds records using Roll Number.
#include <iostream>    // For input and output (cin, cout)
#include <fstream>     // For file handling (reading files)
using namespace std;

int main() {
    ifstream file("student.txt");   // Open "student.txt" for reading

    int roll, searchRoll;           // Variables to store roll numbers
    string name;                    // Variable to store name
    bool found = false;             // Flag to check if record is found

    cout << "Enter Roll Number to search: ";
    cin >> searchRoll;              // Take roll number from user

    // Loop to read records from file one by one
    while (file >> roll >> name) {  // Read roll number and name from file
        if (roll == searchRoll) {   // If the roll number matches user's input
            cout << "\nRecord Found:\n";
            cout << "Roll Number: " << roll << endl;
            cout << "Name: " << name << endl;
            found = true;           // Set found to true
            break;                  // Stop searching after finding the record
        }
    }

    if (!found)                     // If no record was found
        cout << "Record not found!" << endl;

    file.close();                   // Close the file
    return 0;                       // Exit program
}
