//switch statement:
//another replacement of if-else statements.
//those tasks which we can perform from if else statements can also be performed through them. 
//write a program to create a calculator that performs basic arithematic operations
//(add,subtract,multiply and divide) using switch case.the calculator should input two 
// numbers and an operator from user.
#include <iostream>

using namespace std;

int main()
{int a;
  cout<<"enter num1:";
  cin>>a;
char op;
  cout<<"enter your operator";
  cin>>op;
 int b;
  cout<<"enter num2:";
  cin>>b;
  // number1 operator number2
  // you must use single quotes for character constants.Double quotes denote string literals which cause error in code.
if(op=='+') cout<<a+b;
if(op=='-') cout<<a-b;
if(op=='/') cout<<a/b;
if(op=='*') cout<<a*b;
  return 0;
}
// note: this is done by using if,else statements now in the next i'll perform it using switch statements.