// print the sum of digits from 1 to 5.
#include <iostream>

using namespace std;

int main()
{
int n;
n=12345;
int sum=0;
while(n>0){
    int last_digit=n%10;
    n=n/10;
    sum+=last_digit;
}
cout<<sum;
  return 0;
}