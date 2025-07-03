//Write a program to perform simple arithmetic operations (addition, subtraction, 
//multiplication, and division) based on user input using a switch statement.
#include <iostream>

using namespace std;

int main()
{
 int a,b;
 int choice;
 cout<<"Enter 1st Number:";
 cin>>a;
 cout<<"Enter 2nd Number:";
cin>>b;

cout<<"\nSelect Operation\n";
cout<<"1.Addition\n";
cout<<"2.Subtraction\n";
cout<<"3.Multiplication\n";
cout<<"4.Division\n";
cout<<"Enter your choice(1-4): ";
cin>>choice;
switch(choice){
    case 1:
    cout<<"the sum is:"<<a+b<<endl;
    break;
    case 2:
    cout<<"the difference is:"<<a-b<<endl;
    break;
    case 3:
    cout<<"the product is:"<<a*b<<endl;
    break;
    case 4:
    if(b!=0)
    {cout<<"the division is:"<<a/b<<endl;}
    else{
        cout<<"division By zero is not allowed";
    }
    break;
    default:
    cout<<"the invalid operation"<<endl;
    break;
}
}
