#include<cstdint>
#include<iostream>
#include<conio.h>
#include<vector>
//#include<stdlib.h>
#include "Blockchain.h"
using namespace std;
int main()
{
    int n,amount,deposit,withdraw,i;
Blockchain b;
TransactionData data;
 b.addBlock(data);

   
    
    amount=0;


for(i=0;i<3;i++)
{
 
cout<<"press 1 for donator\npress2 for victim"<<endl;
cin>>n;
switch(n)
{
case 1:
        cout<<"enter the amount";
        cin>>deposit;
        amount=amount+deposit;
        cout<<"\nthank you for donatintg RS$ "<<deposit;
        break;

case 2:
       cout<<"Don't worry,we are always with you\n";
       cout<<"enter the amount that you need";
       cin>>withdraw;
              if(withdraw>amount)
       {
               cout<<"sorry your amount is out of fund plz enter the amount below "<<amount<<endl;
       }
       else{
       
        amount=amount-withdraw;
        
        cout<<"\nyour Account is debited to Rs$ " <<withdraw;

       }
        break;
default:
       cout<<"plz enter only 1 or 2";

}
 cout<<"\n charity fund= "<<amount<<endl;
cout<<"\n hash value of charity fund= "<<data.amount<<endl;
 cout<<endl;
  }


}

