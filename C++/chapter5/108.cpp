// Library functions:
// Those type of function which we don't like to type whole.to avoid such we use library functions:
/*
1)square root sqrt() 2)cube root cbrt() 3)maximum of 2 numbers max() 4)minimum of 2 Numbers min()
5)power pow(a,b)
Mostly used are min,max and sometimes pow though. 
*/
#include <iostream>
#include<cmath> // math.h in C language.
//cmath header file is used to perform mathematical operations. 
using namespace std;

int main()
{
  cout << sqrt (10)<<endl;//library functions.
   cout << cbrt(8)<<endl;
   cout<<min(4,8)<<endl;
     cout<<max(4,8)<<endl;
       cout<<pow(2,3)<<endl;
  return 0;
}// you can give any data-type as a parameter whether it is float or int.  
// min and max functions do not require a header file.
