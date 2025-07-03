//Built-In String Functions:
//standard template Library:
#include <iostream>

using namespace std;
int main()
{
  string s="Awais Haider";
  s.push_back('i');//push back function is used to append in numbers.
  cout<<s<<endl;
  s.pop_back();// it removes the last element from a digit.
  cout<<s<<endl;
s.append(" Gardezi");// we can add a new line to the string.
//our length changes as we push back or append.
cout<<s;
s.clear();//makes the string an empty string.
cout<<s;
  return 0;
}