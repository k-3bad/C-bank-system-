#ifndef CHECKING_H
#define CHECKING_H

#include "bankAccount.h"
#include <string>

class checkingAccount:public bankAccount
{

public:
checkingAccount(string newName, double newBalance, int newAccNum);
~checkingAccount();

virtual void writeCheck();
virtual void editMenu();
virtual void displayInfo();
int getCheckCounter();
void editCheckCounter();

private:
int checkCounter;

};





#endif
