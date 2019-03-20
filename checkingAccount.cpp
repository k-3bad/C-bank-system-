#include "checkingAccount.h"
#include <iostream>
#include <string>

checkingAccount::checkingAccount(string newName, double newBalance, int newAccNum)
:bankAccount( newName,  newBalance,  newAccNum),checkCounter(10)
{

this->setAccountType("checking account ");

}

void checkingAccount::displayInfo()
{
   bankAccount::displayInfo();

   

}


void checkingAccount::editMenu()
{

int choise=0;
string newName;
int newBalance;
int accNUmb;  


while(choise!=4)
    {
    cout<<endl<<"\nPlease select what you want to do: "
    <<"\n1.Show information of this account"
    <<"\n2.Edit owner name  "
    <<"\n3.Write check "
    <<"\n4.Quit to the main menu "<<endl
    <<"Enter a value:";
   cin>>choise;

switch(choise)
        {
          
        case 1:this->displayInfo();break;
        
        case 2:
        cout<<"\nWhat is the new name?: "<<endl;
        getline(cin,newName);
        this->setName(newName);
        break;
        case 3:
        this->writeCheck();
        break;
  
        case 4:break;

        default:cout<<"\nWrong entry, try again please"<<endl;break;


      }
}

}

void checkingAccount::writeCheck()
{

    cout<<endl<<"please state how much is the check "
    <<endl<<" enter a value:";
    double value;
    cin>>value;
    if(this->getBalance())//see if it is minus
    this->setBalance(this->getBalance()-value);
    else
    cout<<endl<<"wrong value " ;

}

void checkingAccount::editCheckCounter()
{

checkCounter--;

}
int checkingAccount::getCheckCounter()
{
return this->checkCounter;

}

checkingAccount::~checkingAccount()
{



}