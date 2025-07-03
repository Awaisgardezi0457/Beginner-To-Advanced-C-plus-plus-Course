//Take input percentage of a student and Print the Grade According to Marks:
#include <iostream>

using namespace std;

int main()
{int percentageofstudent;
    cin>>percentageofstudent;
    if(percentageofstudent>=81 and percentageofstudent<=100){
        cout<<"Very Good";}
else if (percentageofstudent>=61 and percentageofstudent<=80)
{
    cout<<"Good";
}
else if (percentageofstudent>=40 and percentageofstudent<=60)
{
    cout<<"Average";
}
else{
    cout<<"fail";
}
    
    
return 0;
}
// the following is known as the ladder of the if-else statements.