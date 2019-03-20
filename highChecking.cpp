#include <string>
#include "highChecking.h"





    highCheking::highCheking(string newName, double newBalance, int newAccNum)
    :noService( newName,  newBalance,  newAccNum)
    {

this->setAccountType(" High checking account ");


    }

void highCheking::displayInfo()
{
bankAccount::displayInfo();

}


void highCheking::writeCheck()
{


    
    cout<<endl<<endl
  
    <<endl<<"please state how much is the check "
    <<endl<<" enter a value:";
    double value;
    cin>>value;
    this->setBalance(this->getBalance()-value);
    cout<<endl<<endl<<"your new balance is "<<getBalance();


    
}

    highCheking::~highCheking()
    {







    }