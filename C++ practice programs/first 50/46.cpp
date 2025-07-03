//Count the occurrences of each digit in a given number (use while loop with an array and 
//if condition).
#include <iostream>

using namespace std;

int main()
{
  int n,digitcount[10]={0};
  cout<<"enter a Number:";
  cin>>n;
  if(n==0){
    digitcount[0]=1;
  }
  if(n<0){
    n=-n;
  }
  while(n>0){
int last_digit=n%10;
if(last_digit==0){digitcount[0]++;}
if(last_digit==1){digitcount[1]++;}
if(last_digit==2){digitcount[2]++;}
if(last_digit==3){digitcount[3]++;}
if(last_digit==4){digitcount[4]++;}
if(last_digit==5){digitcount[5]++;}
if(last_digit==6){digitcount[6]++;}
if(last_digit==7){digitcount[7]++;}
if(last_digit==8){digitcount[8]++;}
if(last_digit==9){digitcount[9]++;}
n=n/10;  
}
for(int i=0;i<10;i++){
    if(digitcount[i]>0){
        cout<<"Digit"<<i<<"came"<<digitcount[i]<<"times"<<endl;
    }
}
  return 0;
}