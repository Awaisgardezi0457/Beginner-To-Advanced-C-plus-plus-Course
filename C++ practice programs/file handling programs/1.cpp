//69. Write a C++ program that stores records in a sequential/index file.
#include <iostream>     // For input and output (cin, cout)
#include <fstream>      // For file handling (reading/writing files)
#include <string>       // To use the string data type

using namespace std;    // Avoid writing std:: before cin, cout, etc.

int main() {
    ofstream outFile("student.txt");   // Create and open file "student.txt" for writing

    int rollNumber;                    // Variable to store Roll Number (integer)
    string name, studentClass, subject;  // Variables to store Name, Class, Subject (strings)
    float marks;                      // Variable to store Marks (decimal number)

    // Ask the user to enter the Roll Number
    cout << "Enter Roll Number: ";
    cin >> rollNumber;                // Read Roll Number from user input
    cin.ignore();                    // Ignore leftover newline so next getline works correctly

    // Ask the user to enter the Name
    cout << "Enter Name: ";
    getline(cin, name);              // Read whole line (including spaces) as Name

    // Ask the user to enter the Class
    cout << "Enter Class: ";
    getline(cin, studentClass);      // Read whole line as Class

    // Ask the user to enter the Subject
    cout << "Enter Subject: ";
    getline(cin, subject);           // Read whole line as Subject

    // Ask the user to enter Marks
    cout << "Enter Marks: ";
    cin >> marks;                   // Read Marks as a floating-point number

    // Write all the data to the file, each on a separate line
    outFile << rollNumber << endl;   // Write Roll Number followed by newline
    outFile << name << endl;         // Write Name followed by newline
    outFile << studentClass << endl; // Write Class followed by newline
    outFile << subject << endl;      // Write Subject followed by newline
    outFile << marks << endl;        // Write Marks followed by newline

    outFile.close();                 // Close the output file to save data

    // Open the same file for reading
    ifstream inFile("student.txt");  // Open file "student.txt" for reading

    cout << "\nStored Record:\n";    // Print header to console

    inFile >> rollNumber;            // Read Roll Number from file
    inFile.ignore();                 // Ignore newline after reading Roll Number

    getline(inFile, name);           // Read Name (whole line) from file
    getline(inFile, studentClass);   // Read Class (whole line) from file
    getline(inFile, subject);        // Read Subject (whole line) from file
    inFile >> marks;                 // Read Marks from file

    // Display the data read from the file
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Name: " << name << endl;
    cout << "Class: " << studentClass << endl;
    cout << "Subject: " << subject << endl;
    cout << "Marks: " << marks << endl;

    inFile.close();                 // Close the input file

    return 0;                      // Return 0 to indicate successful program completion
}
