// Ternary Operator:
// this operator helps you to write the if-else statements in a single line.
//syntax:   Expression1? Expression2: Expression3;
#include <iostream>

using namespace std;

int main()
{int x;
    cout<<"enter N:";
    cin>>x;
//condition ? if true: if false;
(x%2==0)? cout<<"even number": cout<<"odd number";
}
//In ternary operator you don't mention if-else statements.
// you can see we have summarize a whole if else statement code in a single line.
// it should be used when dealing with 2 conditions but it is also possible for 3 conditions.
