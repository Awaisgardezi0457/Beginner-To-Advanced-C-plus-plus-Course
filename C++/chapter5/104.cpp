//void and int in a function are return type;
/*
main function: It cannot be called more than once.It is always called once in a code. 
return; :
return is a keyword that is used to terminate/stop/exit a function. 
where i'll excute return in a function at any point in code.My code will exit immediately. 
Not exactly but its kind of like break statement. 
Our functions are mostly of different data-types.As,somefunctions will start from void,bool etc.
in functions they are not known as Data-Type.Despite,They are termed as Return-Type Functions. 
Mostly void is used cause when we don't want to return a value.
*/
#include <iostream>

using namespace std;
void America(){
cout<<"You are in america"<<endl;
return;// my program terminator.
cout<<"You are in america"<<endl;
}
void Pakistan(){
cout<<"You are in Pakistan"<<endl;
}
int main()
{ cout<<"You are in main"<<endl;
 America();
}
// you can see you are in america got printed once and after return keyword the function terminated.
