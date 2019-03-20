#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include"bankAccount.h"
#include <string>

//Create a saving account
//And see if it is with minmum balance

class savingAccount : public bankAccount
{
    public:

    savingAccount(string newName, double newBalance, int newAccNum);
    ~savingAccount();

        

    virtual void editMenu();
    virtual void  displayInfo();




    private:
    bool minmumBalance;

};

#endif // SAVINGACCOUNT_H
