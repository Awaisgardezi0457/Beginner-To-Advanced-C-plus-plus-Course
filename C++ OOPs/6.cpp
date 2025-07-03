//Constructors:
//the user defined data-type of class is the collection of one or more data-types.
//it is like a small array as we know that an array can be initialized  on the single 
//line.by using constructors we can do this for arrays also. 
/*
We can define constructors as a type of functions which have no return-type. 
*/
#include <iostream>

using namespace std;
class Student{
    public:
     string name;
     int rollno;
     float gpa;
     Student(string s,int r,float g){// parameerized constructor
name=s;
rollno=r;
gpa=g;
}
};
int main()
{
Student s1("Awais Haider",36,3.6);
cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rollno<<endl; 
  return 0;
}