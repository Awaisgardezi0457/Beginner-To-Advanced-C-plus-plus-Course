//Multiple constructors:
#include <iostream>

using namespace std;
class Student{
    //student is a new data-type. 
    //Creating a user-defined data-type is also known as pascal's case. 
public :
    float GPA;
  int rollno;
  string name;
  int age;
  Student(){

  }
  Student(int r,string n){
rollno=r;
name=n;
  }
Student(int r,string n,float g){
    rollno=r;
    name=n;
    GPA=g;
}
Student(int r){
    rollno=r;
}
};
int main()
{
 Student s1(36,"Awais Haider");
  s1.GPA=3.6;
//  s1.name="Awais Haider";
// s1.rollno=36;
//  s1.age=20;

  Student s2(13,"Aryan Hassan",3.7);
//  s2.GPA=3.7;
//  s2.name="Aryan Hassan";
//  s2.rollno=13;
//  s2.age=21;
Student s3(12);
 cout<<s1.name<<" "<<s1.rollno<<" "<<s1.GPA<<endl;
 cout<<s2.name<<" "<<s2.rollno<<" "<<s2.GPA<<endl;
 cout<<s3.rollno<<endl;
  return 0;
}
//We can also make multiple constructor by as we are passing three parameters in one constructor then we can change their
//values by  first taking Gpa or name and can construct another constructor. 
//As for example you can see I've constructed 4 constructors so i can create multiple constructors as much I want. 
