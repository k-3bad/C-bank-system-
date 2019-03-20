#include "bankAccount.h"
#include<iostream>
#include <string>

using namespace std; 

bankAccount::bankAccount(string newName, double newBalance,int newAccNum)
{
    name=newName;
    balance=newBalance;
    accountNum=newAccNum;
    setAccountType(" ");

    cout<<endl<<endl<<"your account is ready ";

}

string bankAccount::getName()
{
return name;
}


void bankAccount::setName(string newName)
{

    name=newName;
}

double  bankAccount::getBalance()
{

    return balance;
}

void bankAccount::setBalance(double newBalance)
{
if(newBalance<0){cout<<"\n\n\n The result if lower than zero, try agin please";return;}
else balance=newBalance;

}

int bankAccount::getAccountNum()
{

return accountNum;

}


void bankAccount::setAccountNum(int newAccNum)
{


    accountNum=newAccNum;
}

string bankAccount::getAccountType() const
{

return accountType;

}
void  bankAccount::setAccountType(string newType)
{

this->accountType=newType;
}

void bankAccount::displayInfo()
{
    cout<<"\nHere are your infromation:"
    <<"\nYour name is: "<<getName()
    <<"\nYour current balance is: "<<getBalance()
    <<"\nYour account number is: "<<getAccountNum()
    <<"\nYour account type is: "<<getAccountType();

}


// void bankAccount::editMenu()
// {

// return;

// }
bankAccount::~bankAccount()
{



}
