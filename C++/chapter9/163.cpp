//what are string and why they are used?
//they are basically characer arrays and are used to name things.
//don't use cin operator instead of it use getline cause it does not give a whole line and just a single world.
#include <iostream>

using namespace std;

int main()
{
string str;
getline(cin,str);
cout<<str;
  return 0;
}