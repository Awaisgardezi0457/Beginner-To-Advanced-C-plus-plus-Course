//Develop a simple ATM system where users can deposit, withdraw, and check balance 
//using a menu-driven approach (use do-while loop and switch-case).
#include <iostream>

using namespace std;

int main()
{
 double deposit,withdraw,balance,amount;
 int choice;
 do{
cout<<"\nWelcome To Bank of Punjab\n";
 cout<<"1.deposit money\n";
 cout<<"2.Withdraw Money\n";
 cout<<"3.Check Balance\n";
 cout<<"4.Exit\n";
 cout<<"Enter Your Choice:";
 cin>>choice;
 switch(choice){
    case 1:
    cout<<"Enter the Amount to Deposit:";
    cin>>amount;
    if(amount>0){
        balance+=amount;
        cout<<"amount Deposited Successfully\n";
    }
    else{
        cout<<"Invalid amount.Please enter a positive value";
    }
    break;
    case 2:
    cout<<"Enter amount to Withdraw:";
    cin>>amount;
    if(amount>0 and amount>=balance){
        balance-=amount;
        cout<<"Amount Withdrawn Successfully\n";
    }
    else if(amount>balance){
        cout<<"insufficient balance"<<endl;
    }
    else{
        cout<<"invalid amount\n";
    } 
    break;
    case 3:
    cout<<"Your current balance is Rs."<<balance<<endl;
    break;
    case 4:
    cout<<"thank you For Using Bank Of Punjab ATM"<<endl;
    break;
    default:
    {cout<<"invalid choice.Please select a valid option.\n";
 }
 
 }
  
}while(choice!=4);}