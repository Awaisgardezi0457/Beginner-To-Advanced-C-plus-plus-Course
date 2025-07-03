/*Problem:- Write a C++ program that calculates the average grade of students and assigns a 
grade. 
[Hint]
 Use a for loop to take input for multiple students’ grades. [Either store in an array or 
variables] 
 Furter you will use while loop to prompt for more students until the user chooses to stop. 
[ May be some number or character as an exit point] 
 Later use the do while loop to ensure numbers entered are valid (0-100). 
 You will also use an if else statement to assign grades based on percentage (A, B, C, D, 
Fail). 
 And lastly use a switch case to give comments based on grade ( for example  A - 
"Excellent", B - "Very Good", C - "Good", D - “Average”, and F - Fail” etc.).*/
#include <iostream>

using namespace std;

int main()
{
int numstudent;
char choice;
do{
    cout<<"Enter number of students:";
    cin>>numstudent;
    double totalmarks=0;
    double mark;
    for(int i=1;i<=numstudent;i++){
        cout<<"Enter marks for student"<<i<<"(0,100):";
        cin>>mark;

    }while(mark<0 or mark>100);
    {totalmarks+=mark;}
    double average=totalmarks/numstudent;
char grade;
if(average>=80){
    grade='A';
}
else if (average>=70)
{
    grade='B';
}
else if (average>=60)
{
    grade='C';
}
else if (average>=50)
{
    grade='D';
}
else{
    grade='F';
}
 cout << "Average marks: " << average << endl;
        cout << "Grade: " << grade << endl;
          switch (grade) {
            case 'A':
                cout << "Comment: Excellent!" << endl;
                break;
            case 'B':
                cout << "Comment: Very Good!" << endl;
                break;
            case 'C':
                cout << "Comment: Good!" << endl;
                break;
            case 'D':
                cout << "Comment: Average." << endl;
                break;
            case 'F':
                cout << "Comment: Fail." << endl;
                break;
            default:
                cout << "Invalid Grade." << endl;
        }
           cout << "Do you want to enter marks for more students? (Y/N): ";
        cin >> choice;
}  while (choice == 'Y' || choice == 'y');
 cout << "Program ended. Goodbye!" << endl;

    return 0;
}
