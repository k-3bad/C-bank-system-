#ifndef SEVCHAREG_H
#define SEVCHAREG_H

#include "checkingAccount.h"
#include <string>

class servCharegCheck:public checkingAccount
{

public:
servCharegCheck(string newName, double newBalance, int newAccNum);
~servCharegCheck();

virtual void writeCheck();
//virtual void editMenu();
virtual void  displayInfo();




};





#endif
