#ifndef    NOSERVICE_H
#define    NOSERVICE_H


#include "checkingAccount.h"
#include <string>

class noService:public checkingAccount
{
    public:
    noService(string newName, double newBalance, int newAccNum);
    ~noService();

    virtual void writeCheck();
    //virtual void editMenu();
    //virtual void  displayInfo();


};
















#endif