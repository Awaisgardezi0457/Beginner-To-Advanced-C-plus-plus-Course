//vowels in strings:
#include <iostream>

using namespace std;

int main(){
string s="Dog is an animal with two legs";
int count=0;
for(int i=0;i<s.length();i++){
    if (s[i]=='a'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='e'){
        count++;
    }
}cout<<count;
  return 0;
}
