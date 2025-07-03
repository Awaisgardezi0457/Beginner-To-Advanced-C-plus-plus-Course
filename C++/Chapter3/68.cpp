//print the factorials of first 'n' numbers:
// nested loops(nested for loop):
//in order to print factorial of 'n' numbers we'll pass two for loops with similar conditions and then multiply fact=fact*j to execute the code.
#include <iostream>
using namespace std;

int main() {
int n;
cout<<"enter number:";
cin>>n;
for(int i=1;i<=n;i++){
  int fact=1;
  for(int j=1;j<=i;j++)
  {
    fact=fact*j;
  }

cout<<"the factorial of the "<<i<< "is: "<<fact<<endl;
}
return 0;
}
