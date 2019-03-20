#include "savingAccount.h"
#include <iostream>
#include <string>

using namespace std;

savingAccount::savingAccount(string newName, double newBalance, int newAccNum)

   :bankAccount(newName, newBalance, newAccNum)
{
    

   
    this->setAccountType("Saving Balance with an  interset rate ");
   
}

void savingAccount::displayInfo()
{
   bankAccount::displayInfo();

   //cout<<"\n Type of account is "<< getAccountType();

}


void savingAccount::editMenu()
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
    <<"\n3.Change balance "
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
        cout<<"\n What is the new balance?:"<<endl;
        cin>>newBalance;
        this->setBalance(newBalance);
        break;
  
        case 4:break;

        default:cout<<"\nWrong entry, try again please"<<endl;break;


      }
}

}

savingAccount::~savingAccount()
{
    //dtor
}
