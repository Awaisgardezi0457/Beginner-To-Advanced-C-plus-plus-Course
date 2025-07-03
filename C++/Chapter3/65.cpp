//write a program to give the sum of a given number and its reverse.
#include <iostream>

using namespace std;

int main()
{
 int n,rev=0,sum=0;
 cout<<"enter Number:";
 cin>>n;
 int original_num=n;
 while(n>0)
 {
    int last_digit=n%10;
    n/=10;
    sum+=last_digit;
    rev=rev*10;
    rev+=last_digit;

 }
 cout<<"the sum of Numbers is:"<<sum<<endl;
 cout<<"The reverse of numbers is:"<<rev<<endl;
cout<<"the sum of a given number and its reverse is:"<<original_num+rev;
  return 0;
}
//in order to print to the sum of number and its reverse we have to make another variable 
// like I created original in which value is preserved and then add it at end wih reverse of the number.
//you'll get your answer.