//in void function you need not use return keyword.
//while,if you use int then there is need of using return depending upon condition.
// we can also call function inside another function.
//always write functions before main() to avoid errors.
// as i've called america so the function that defines america must be before the function or it may give error.

#include <iostream>

using namespace std;
void America(){
cout<<"You are in america"<<endl;
return;// my program terminator.
cout<<"You are in america"<<endl;
}
void Pakistan(){
cout<<"You are in Pakistan"<<endl;
America();
}
int main()
{ cout<<"You are in main"<<endl;
 Pakistan();
}