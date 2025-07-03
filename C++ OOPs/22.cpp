//Problem Statement:
//we do not want the user to change the particular class member but we want the user can
//atleast print/access it.
/*
Here to solve the above problem we use the getter function:
We have given the getter name to the function by ourselves we can name it whatever we 
want. 
*/
#include <iostream>

using namespace std;
class Student{
  public://Access Modifiers:

    int roll_no;
    string name; 
    Student(){

    }
    Student(int roll_no,string name,float marks){
this->roll_no=roll_no;
this->name=name;
this->marks=marks;
    }
    void display(){
        cout<<"Roll No:"<<roll_no<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
    // void get_marks(){ //getter(we can create multiple getters to fetch the values of marks) 
    //     cout<<marks; //the only way to print the marks of a private allocated variable.
    // }
    void set_marks(float marks){//setter
        this->marks=marks;
    }
private:
    float marks;
   
};
int main()
{
Student s1(36,"Awais Haider",95.8);
s1.set_marks(21.4);//see we can change our marks by this of a private variable.
s1.display();
// s1.get_marks();

// Student s2;
// s1.name="Hassnain";
// s2.roll_no=9;
//s2.marks=94.8;//still here marks cannot be directly accessed.
  return 0;
}
//public allocation means we can use the attributes we want.
//in private allocation we cannot use the attributes inside main function but we can use them internally.
//the student s1 variable values first go to the constructor parameter then there values are stored there
//then as we can access that variable internally that private allocation or inside public allocation
//so their values got printed.
// this is the only way to print the values 
//Still if we directly access them inside main function it'll give an error.
//Moreover,I can just access and print the value but can't change it.
//Also,I cannot solo print it.
//If,I put the constructor in the private allocator then I could not make the initializer and cannot set the values 
//of variables.So,it necessary to never put a constructor inside a private allocator.
//Moreover,We cannot call a constructor multiple times.
//I can a private allocator value using a setter.
//it will allow me to change my value of marks.