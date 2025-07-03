//User-defined Data-type:
//you need to store data of 50 students. 
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
};
int main()
{
 Student s1;
 s1.GPA=3.6;
 s1.name="Awais Haider";
cin>>s1.rollno;
 s1.age=20;

 Student s2;
 s2.GPA=3.7;
 s2.name="Aryan Hassan";
 s2.rollno=13;
 s2.age=21;

 cout<<s1.name<<" "<<s1.rollno<<" "<<s1.GPA<<endl;
 cout<<s2.name<<" "<<s2.rollno<<" "<<s2.GPA<<endl;
  return 0;
}
//all elements in an array are inter-releated cause they have continous memory allocation. 
//in array,elements of same data-type and multiple elements are stored. 
// in a user defined data-type the first one is class and second is object. 
//Here we have to use the dot(.) operator to initialize a class.
//Here rollno,GPA,name and age are attributes. 
//Here student is our class while s is our objects.
//student s; is a big container that stores all the values.
