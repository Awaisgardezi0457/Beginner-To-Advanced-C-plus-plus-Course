//Count the number of given elements in an array.Greater than a Given number x.
#include <iostream>

using namespace std;

int main()
{int count=0;
 int arr[]={1,3,46,7,86,53,64,34,56};
 int x=4;
 for(int i=0;i<=8;i++){
if (arr[i]>x) 
{count++;
    }
    }
cout<<count<<endl;
  return 0;
}