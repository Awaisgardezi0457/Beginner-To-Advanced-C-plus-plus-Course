//Private and Public Access Modifiers:
#include <iostream>

using namespace std;
class Student{
  public://Access Modifiers:

    int roll_no;
    string name;
     void display(){
        cout<<name<<" "<<marks<<" "<<roll_no<<endl;
    }
private:
    float marks;
   
};
int main()
{
Student s1;
s1.roll_no=36;
s1.name="Awais";
//s1.marks=94.9;// cause its private access modifier so it will regard in an error.
s1.display();
  return 0;
}
//we can access,set all data members in public access modifiers.
//while in private we cannot do this to the data members.
//we cannot use,change or print private members.
//We create private modifiers for security concerns.
//When we don't want the user to change the data so we make the data a private member.
//Problem Statement:
//we do not want the user to change the particular class member but we want the user can
//atleast print/access it.
/*
Here to solve the above problem we use the getter function:
We have given the getter name to the function by ourselves we can name it whatever we 
want. 

*/
