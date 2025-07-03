// if cost price and selling price of an item is input through the key-board,write a program to
//determine whether the seller has made profit or incurred loss or no profit or no loss.
//also determine how much profit or loss he incurred or gained.
#include <iostream>

using namespace std;

int main()
{int c_price,s_price,total_rev;
    cout<<"enter cost price:";
    cin>>c_price;
    cout<<"enter selling price:";
    cin>>s_price;
    total_rev=s_price-c_price;
if(s_price>c_price){
    cout<<"the Seller has made profit:"<<total_rev;
}
else if(s_price<c_price)
{cout<<"The seller incurred a loss:"<<-total_rev;}
// if(s_price==c_price)
else {
    cout<<"NO profit and No Loss:"<<total_rev;
}
  return 0;
} 