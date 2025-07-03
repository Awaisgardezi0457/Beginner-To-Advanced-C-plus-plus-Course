//2D arrays are known as arrays of arrays.
//write a program to store roll number and Marks obtained by 4 students side by side in 
//a matrix.
#include <iostream>

using namespace std;

int main()
{
int result[2][4]={{1,2,3,4},{86,91,56,72}};
cout<<"Roll No:\tMarks\n";
for(int i=0;i<4;i++){
        cout<<result[0][i]<< "\t" <<result[1][i]<<endl;;

    }
}
  