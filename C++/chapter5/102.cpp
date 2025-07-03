// int main(){} this is a function.what we'll write inside the code we'll be the part of the function.
// main function is necessary to start a code without main function you cannot execute your code.
//usually,we may  call our functions before the main function.
// you can give any name to your function.

#include <iostream>

using namespace std;
void greet(){
cout<<"Good Morning"<<endl;
cout<<"How are you"<<endl;
}
int main()
{
 greet();//function calling (it means to perform all the task of the defined function)
 cout<<"hey"<<endl;
 greet();
}
// if we have multiple functions then in this case,only main function will be executed.
// no problem whether its written after or before.
// after my desired function is called it performs the task and after performing the function it exits.
// after all the lines of main function ends my code ends.
