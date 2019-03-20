#include "noService.h"
#include <iostream>
#include <string>


noService::noService(string newName, double newBalance, int newAccNum)
:checkingAccount( newName,  newBalance,  newAccNum)
{


this->setAccountType("No service charge checking ");

}

void noService::writeCheck()
{
//To see if counter more than 0, person can write a check for this month    

    
    cout<<endl<<endl
  
    <<endl<<"please state how much is the check "
    <<endl<<" enter a value:";
    double value;
    cin>>value;
    this->setBalance(this->getBalance()-value);
    cout<<endl<<endl<<"your new balance is "<<getBalance();


    
}

noService::~noService()

{



}