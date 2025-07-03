//write a program to print the reverse of a given number:
/*Hint:
1)Sum of digit.
2)4321= 4,40,43,430,432,4320,4321
we have done that first we've multiply by 10 and then add in reverse order.
*/
#include <iostream>

using namespace std;

int main()
{
int n,rev=0;// initialize your reverse number r=0.
cout<<"enter your Number :";
cin>>n;
while(n>0){
    int last_digit=n%10;
    n=n/10;// in order to get the last digit.
rev=rev*10;
rev=last_digit+rev;
}
cout<<rev;
  return 0;
}
//1) first initialize a last digit;
//2)then multilply r with 10 r*=10
//3)then increment last digit in r r+=last_digit.
//4)then divide n with 10 n/=10
//you're number will be reversed.