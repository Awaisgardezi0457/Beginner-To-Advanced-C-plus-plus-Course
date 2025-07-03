//Create a number guessing game where the user has limited attempts (use do-while loop 
//with if-else).---- You need to work on this logic… In your childhood, you played such
//games with your friends.
#include <iostream>
#include  <stdlib.h>
#include  <ctime>
using namespace std;
int main()
{
 int secret,guess,tries=1;
 srand(time(0));
 secret=rand()%10 +1;
 cout<<"Guess the number (1 to 10). You Have 3 Tries!"<<endl;
 do{
    cout<<"try"<<tries<<":";
    cin>>guess;
    if(guess==secret){
        cout<<"Congrajulations You Guessed It right!"<<endl;
        break;
    }
    else if (guess< secret)
    {
        cout<<"too low!"<<endl;
    }
    else if (guess>secret)
    {
        cout<<"too high!"<<endl;
    }
    tries++;
 }
 while (tries<=3);
    if(guess!=secret){
        cout<<"the Correct Number Was"<<secret<<"."<<endl;
    }
 }
  
