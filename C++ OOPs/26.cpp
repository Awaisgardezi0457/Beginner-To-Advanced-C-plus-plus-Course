//Multiple Inheritance:
#include <iostream>

using namespace std;
class Cricketer{
public:
    int runs;
    int wickets;
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
};
int main()
{
 Saurav_Netrawalkar s1;
 s1.Hobby="Guitarist";
 s1.runs=2100;
 s1.wickets=39;
 s1.average=39.4;
 cout<<s1.Hobby<<" "<<s1.runs<<" "<<s1.wickets<<" "<<s1.average<<endl;
  return 0;
}