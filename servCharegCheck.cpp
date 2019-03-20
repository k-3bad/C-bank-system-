#include <iostream>
#include <string>

#include "servCharegCheck.h"

servCharegCheck::servCharegCheck(string newName, double newBalance, int newAccNum)
:checkingAccount( newName,  newBalance,  newAccNum)
{
this->setAccountType("service charge checking ");



}

void servCharegCheck::displayInfo()
{
   checkingAccount::displayInfo();
   cout<<endl<<"You can write "<<getCheckCounter()<<" checks this month,";

   

}


void servCharegCheck::writeCheck()
{
//To see if counter more than 0, person can write a check for this month    
if(getCheckCounter()>0)
    {
    cout<<endl<<endl
    <<"You can write "<<getCheckCounter()<<" checks this month,"
    <<endl<<"please state how much is the check "
    <<endl<<" enter a value:";
    double value;
    cin>>value;
    if(this->getBalance())//see if it is minus
    this->setBalance(this->getBalance()-value);
    else
    cout<<endl<<"wrong value " ;
   //After every time reduce the counter
    this->editCheckCounter();


    }
    else
     cout<<endl<<"you used 10 checks this month, this is maximum " ;

}


servCharegCheck::~servCharegCheck()
{



}
