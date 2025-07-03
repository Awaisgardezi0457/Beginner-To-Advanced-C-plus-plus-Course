//switch statement:
//another replacement of if-else statements.
//those tasks which we can perform from if else statements can also be performed through them. 
//write a program to create a calculator that performs basic arithematic operations
//(add,subtract,multiply and divide) using switch case.the calculator should input two 
// numbers and an operator from user.
/*
switch (integer/character expression){
case constant 1: 
do this;
case constant 2:
do this;
case constant 3: 
do this;
default: 
do this;
}
*/
#include <iostream>

using namespace std;

int main()
{int a;
  cout<<"enter num1:";
  cin>>a;
char op;
  cout<<"enter your operator:";
  cin>>op;
 int b;
  cout<<"enter num2:";
  cin>>b;
switch (op)
{
case '+':
cout<<a+b<<endl;
break;
case '-':
cout<<a-b<<endl;
break;
case '*':
cout<<a*b<<endl;
break;
case '/':
cout<<a/b<<endl;
break;
default:
cout<<"invalid operator"<<endl;
}

}
// if you write a semi-colon after if statement then if statement is finished and next line 
//would be independent.
