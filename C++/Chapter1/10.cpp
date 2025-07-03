// variable naming rules:
/*
1)variables can start from alphabets or underscores(_) or $(not recommended)
2)Special characters except _ and $ are not allowed.
3)Some particular keywords are not allowed.Cause they are name of datatype.
4)you can use capital letters or single letters as variables to avoid errors. 
5)commas and blanks are not allowed. you must not give space.
*/
#include <iostream>

using namespace std;

int main()
{int x1,_x;
    x1=3;
    cout<<x1;
   // 1x=3;// this will cause error cause variable name can never start with a digit.
    //cout<<1x<<endl;
_x=5;
cout<<_x;
  return 0;
}