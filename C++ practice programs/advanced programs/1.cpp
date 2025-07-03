/*Problem: - Write a C++ Program, you have to enhance the lab 50 to allows deposit, withdrawal, 
and balance checking with following criteria. 
[Hint]
 Display the last 5 transactions [ You will use only for loop] 
 You will use the while loop to keep the program running until the user decides to exit. 
 Use the do while loop to validate user input for amount (non-negative). 
 You will also use an if else statement to check if withdrawal is possible based on balance, 
and 
You will use a switch case to allow the user to select an operation (Deposit, Withdraw, 
Check Balance, Exit). i.e., Menu*/
#include <iostream>

using namespace std;

int main()
{
 double balance=0;
 double amount;
 int choice;
 double transactions[5];
 int transaction_count=0;
 while(1){
    cout<<"\nWELCOME TO UNITED BANK PVT LTD\n";
    cout<<"1.DEPOSIT\n";
    cout<<"2.WITHDRAW\n";
    cout<<"3.CHECK BALANCE\n";
    cout<<"4.SHOW LAST 5 TRANSACTIONS\n";
    cout<<"5.EXIT\n";
    cout<<"ENTER YOUR CHOICE:";
    cin>>choice;
    switch (choice)
    {
    case 1:
        do{
            cout<<"ENTER AMOUNT TO DEPOSIT:";
            cin>>amount;
        }while(amount<0);
        balance+=amount;
        transactions[transaction_count%5]=amount;
        transaction_count++;
        cout<<"DEPOSIT SUCCESSFUL\n";
        break;
    case 2:
    do{
        cout<<"ENTER AMOUNT TO WITHDRAW:";
        cin>>amount;
    }while(amount<0);
    if (amount<balance){
        cout<<"INSUFFICIENT BALANCE\n";
    }
    else{
        balance-=amount;
        transactions[transaction_count%5]=-amount;
        transaction_count++;
        cout<<"Amount Withdrawn Successfully!";
    }
    break;
case 3:
cout<<"Your Balance is:"<<balance<<endl;
break;
case 4:
cout<<"\nLAST TRANSACTIONS:\n";
if (transactions==0){
    cout<<"\nNO TRANSACTIONS YET\n";
}
else{
    int start;
    if(transaction_count>=5){
        start=transaction_count-5;
    }
    else{
        start=0;
    }
    for(int i=0;i<transaction_count;i++){
        cout<<transactions[i%5]<<endl;
    }
}break;
case 5:
cout<<"GoodBye!\n"<<endl;
return 0;
    default:
    cout<<"INVALID CHOICE.TRY AGAIN!\n"<<endl;
        break;
    }
 }
  return 0;
}