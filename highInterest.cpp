#include"highInterest.h"
#include <string>
#include <iostream>


using namespace std;

double  highInterest::minmumBalance=500;


highInterest::highInterest(string newName, double newBalance, int newAccNum)

 :savingAccount(newName, newBalance, newAccNum)
{

 bankAccount::setAccountType("High interest saving Balance with high interset rate ");

}




highInterest::~highInterest()
{


    
}
