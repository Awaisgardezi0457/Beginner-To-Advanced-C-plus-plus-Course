//input a String and Update all the even positions in the string o the char'a'.Consider '0' based indexing.
#include <iostream>

using namespace std;

int main()
{
string s="AwaisHaider";
for(int i=0;i<s.length();i++){
    if(i%2==0){
        s[i]='a';
    }
}cout<<s;
  return 0;
}