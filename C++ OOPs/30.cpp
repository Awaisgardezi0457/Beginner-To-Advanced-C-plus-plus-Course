//Constructor Over_Loading:
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

Student s3(12);
 cout<<s1.name<<" "<<s1.rollno<<" "<<s1.GPA<<endl;
 cout<<s2.name<<" "<<s2.rollno<<" "<<s2.GPA<<endl;
 cout<<s3.rollno<<endl;
  return 0;
}
//This is Constructor overloading as we have made multiple Constructors and we can change
//their sequence. It is also Done Before.