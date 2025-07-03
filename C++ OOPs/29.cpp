//Function Overloading/Compile time Polymorphism:

#include <iostream>

using namespace std;
class Loading{
public:
void Sum(string a,string b){
cout<<a+b<<endl;
}
void Sum(int a,int b){
cout<<a+b<<endl;
}
void Sum(int a,int b,int c){
cout<<a+b+c<<endl;
}
// int Sum(int a,int b){ this will produce an error cause it is of different return-type.
//     return a+b;
// }
};
int main()
{
 Loading l1;
 l1.Sum("Awais","Haider");
 l1.Sum(1,9);
 l1.Sum(9,1,2);
  return 0;
}
//The following is known as Function overloading.
//Same functions but different parameters.
//quality of parameters should be different i mean data_type.
//If we use different return type with same function_name we cannot perform function 
//overloading.
