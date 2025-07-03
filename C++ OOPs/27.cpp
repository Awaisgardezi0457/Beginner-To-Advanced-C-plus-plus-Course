//Protected Access Modifier:
#include <iostream>

using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
    protected:
    float average;
};
class Engineer{
public:
int experience;
string Domain;
};
class Saurav_Netrawalkar:public Cricketer,Engineer{//Multiple Inheritance
public:
string Hobby;
Saurav_Netrawalkar(string Hobby,int runs,int wickets,float average){
    this->Hobby=Hobby;
    this->runs=runs;
    this->wickets;
    this->average=average;
}
void display(){
    cout<<Hobby<<" "<<runs<<" "<<wickets<<" "<<average<<endl;
}
};
int main()
{
    Saurav_Netrawalkar s1 ("Guitarist",2100,3900,39.4);
    s1.display();
//  Saurav_Netrawalkar s1;
//  s1.Hobby="Guitarist";
//  s1.runs=2100;
//  s1.wickets=39;
//  s1.average=39.4;
//  cout<<s1.Hobby<<" "<<s1.runs<<" "<<s1.wickets<<" "<<s1.average<<endl;
  return 0;
}
//Like a private class we cannot access a protected class outside class.
//if we have a protected data member we can use it inside its derived class.
//private cannot be accessed inside a derived class.
//Within class we can use all access modifiers.
 