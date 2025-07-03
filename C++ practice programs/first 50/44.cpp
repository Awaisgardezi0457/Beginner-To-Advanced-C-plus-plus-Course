//Print numbers in words (e.g., input: 123 → output: One Two Three) (use while loop and 
//switch-case).
#include <iostream>

using namespace std;

int main()
{
 int n,last_digit,rev=0;
 cout<<"enter your Number:";
 cin>>n;
 int temp=n;
 while(temp>0){
    last_digit=temp%10;
    rev=rev*10+last_digit;
    temp=temp/10;
 }
 cout<<"Enter Number In Words:";
 while(rev>0){
last_digit=rev%10;
switch(last_digit){
case 0: cout<<"zero";break;
            case 1: cout << "One "; break;
            case 2: cout << "Two "; break;
            case 3: cout << "Three "; break;
            case 4: cout << "Four "; break;
            case 5: cout << "Five "; break;
            case 6: cout << "Six "; break;
            case 7: cout << "Seven "; break;
            case 8: cout << "Eight "; break;
            case 9: cout << "Nine "; break;
        }
            rev=rev/10;
 }
  return 0;
}