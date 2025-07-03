//Write a program that takes an integer (1-7) and prints the corresponding day of the week 
//using a switch statement.
#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"enter your day of week:";
cin>>n;
switch(n){
case 1:
cout<<"monday"<<endl;
break;
case 2:
cout<<"tuesday"<<endl;
break;
case 3:
cout<<"wednesday"<<endl;
break;
case 4:
cout<<"thursday"<<endl;
break;
case 5:
cout<<"Friday"<<endl;
break;
case 6:
cout<<"Saturday"<<endl;
break;
case 7:
cout<<"Sunday"<<endl;
break;
default:
cout<<"invalid Input by user"<<endl;
break;
}
}