//Copy constructors:
#include <iostream>

using namespace std;
class Student{
   
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
 Student s6=s1;//Deep Copy
 s6.name="Muhammad";
 cout<<s6.name<<" "<<s6.rollno<<" "<<s6.GPA<<endl;
 Student s7(s2);// Deep copy
 s7.name="Munim";
  cout<<s7.name<<" "<<s7.rollno<<" "<<s7.GPA<<endl;
  return 0;
}
//Here a problem arises that the copy created s6 is a deep copy or shallow copy.
/*
When you assign one object to another or pass an object to a function, C++ copies the data.
There are two ways this copying happens:
1)Shallow Copy
2)Deep Copy
In a shallow copy, only the address (pointer) is copied, not the actual data in the memory.
This means both objects point to the same memory location.
If you change data from one object, the other object also sees that change because they share the same memory.
In a deep copy, a new separate copy of the data is created in a new memory location.
So both objects have their own copies of the data, and changing one does not affect the other.
*/
