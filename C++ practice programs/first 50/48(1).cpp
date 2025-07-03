//Display a pattern (like a pyramid or diamond) based on user input (use nested for loops 
//with if conditions).
#include <iostream>

using namespace std;

int main()
{
int i,n,j,k;
cout<<"enter rows:";
cin>>n;
for(i=1;i<=n;i++){
for(j=1;j<=n-i;j++){
    cout<<" ";
}
for(k=1;k<=2*i-1;k++){
    if(k%2==1){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
}
cout<<endl;
}
}
