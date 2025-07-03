// for loop
/*
syntax: 
 for(int i=1;i<10;i++){
 code 
 }
 for loop(decleration,condition and update)
 int i is the iterator of for loop. 
i++ is the increment /decrement operator
*/
// print "hello world" 'n' times.Take 'n' as input from the user.
#include <iostream>

using namespace std;

int main()
{int i,n;
    cout<<"enter no:";
    cin>>n;
for (i=1;i<=n;i++){
    cout<<"hello World"<<endl;
    cout<<"Basics Of C++"<<endl;// this will also repeat "n" times.
}
  return 0;
}
/*Parameters of for loop:
1) initialization/declaration
2)condition
3)update/(increment/decrement operator)
at first a value is initialized. then condition is checked if true then execute,
then work is done,then at last increment/decrement is done.
//i++ means i=i+1 
// it is not necessary to initialize i with 1. 
*/
