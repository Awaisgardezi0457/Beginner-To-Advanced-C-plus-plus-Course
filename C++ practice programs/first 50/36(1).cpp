//Find the largest and smallest number in a given list of N numbers (use for or while loop 
//with if condition).
#include <iostream>

using namespace std;

int main()
{
  int total_numb,number,largest,smallest;
  cout<<"How Many Numbers:"<<endl;
  cin>>total_numb;
  cout<<"Enter Number 1:";
  cin>>number;
  largest=smallest=number;
  for(int count=2;count<=total_numb;count++){
    cout<<"Enter Number:"<<count<<":";
    cin>>number;
    if(number>largest){
        largest=number;
    }
    if(number<smallest){
        smallest=number;
    }
  }cout<<"the largest number is:"<<largest<<endl;
  cout<<"the smallest number is:"<<smallest<<endl;
  return 0;
}