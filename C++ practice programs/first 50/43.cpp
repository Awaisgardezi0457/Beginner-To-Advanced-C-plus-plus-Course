//Reverse a number and check if it is a palindrome (using while loop along with if-else).
#include <iostream>

using namespace std;

int main()
{
 int n,rev=0;
 cout<<"Enter your number:";
 cin>>n;
 int original =n;
 while(n>0){
   int last_digit=n%10;
    rev=rev*10+last_digit;
    n=n/10;}
   if(original==rev){
        cout<<"the number is a palindrome"<<endl;
    }
    else{
        cout<<"not a palindrome"<<endl;
    }
 }
  
