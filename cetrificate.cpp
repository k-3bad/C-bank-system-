
#include "cetrificate.h"
#include <string>

certificate::certificate(string newName, double newBalance, int newAccNum)
:bankAccount( newName,  newBalance,  newAccNum),miturMonths(0),interestRate(0),cdRate(0)

{
this->setAccountType("Certificate of deposit ");

}

void certificate::setMitureMonths(int newMit)
{

    miturMonths=newMit;
}
void certificate::setInterestRate(double newInters)
{
interestRate=newInters;


}
void certificate::setCdRate(double newCD)
{

cdRate=newCD;


}



int certificate::getMitureMonths()
{return miturMonths;}
double certificate::getInterestRate()
{
return interestRate;

}
double certificate::getCdRate()
{

return cdRate;

}

void certificate::displayInfo()
{
   bankAccount::displayInfo();
   cout<<"Number of miture months: "<<getMitureMonths()
   <<endl<<"Interest rate is: "<<getInterestRate()
   <<endl<<"Cd rate is: "<<getCdRate();


   

}

void certificate::editMenu()
{

int choise=0;
string newName;
int newBalance;
int accNUmb;  
int newNonths;
double newIntersrate;
double newCdRate;


while(choise!=4)
    {
    cout<<endl<<"\nPlease select what you want to do: "
    <<"\n1.Show information of this account"
    <<"\n2.Edit owner name  "
    <<"\n3.Edit Balance "
    <<"\n4.Change Number of miture months "
    <<"\n5.Change Interest rate  "
    <<"\n6.Change Cd rate "
    <<"\n7.Quit to the main menu "<<endl<<endl
    <<"Enter a value:";
   cin>>choise;
    cout<<endl<<endl;

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

        case 4:
        cout<<"\n What is the new Number of miture months?:"<<endl;
        cin>>newNonths;
        this->setMitureMonths(newNonths);
        break;


        case 5:
        cout<<"\n What is the new Interest rate ?:"<<endl;
        cin>>newIntersrate;
        this->setInterestRate(newIntersrate);
        break;


        case 6:
        cout<<"\n What is the new Cd rate ?:"<<endl;
        cin>>newCdRate;
        this->setCdRate(newCdRate);
        break;
  
        case 7:break;

        default:cout<<"\nWrong entry, try again please"<<endl;break;


      }
      cout<<endl<<endl<<endl
      <<"opreation done, thank you ";
}

}


certificate::~certificate()
{}