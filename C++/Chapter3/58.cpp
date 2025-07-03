// infinite loop:
// the loop in which condition never ends.
#include <iostream>

using namespace std;

int main()
{
int i=1;
while (i>0)
{
    cout<<i<<endl;
    i++;
}
  return 0;
}
// this loop will run infinite time .cause i=1 is always greater than zero so no stopping condition.
// while comparing character,we are comparing their ascii values as a<b means 97<98.this will run an infinite loop.
