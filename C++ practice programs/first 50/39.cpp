//Find the sum of even and odd numbers separately from 1 to N (use for loop with if-else).
#include <iostream>

using namespace std;

int main()
{
int n,evensum=0,oddsum=0;
cout<<"enter your numbers:";
cin>>n;
for(int i=1;i<=n;i++){
if(i%2==0){
    evensum=evensum+i;
}
else{
    oddsum=oddsum+i;
}
}
cout<<"the sum of all even numbers is:"<<evensum<<endl;
cout<<"the sum of all odd numbers is:"<<oddsum<<endl;
  return 0;
}