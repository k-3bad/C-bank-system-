#ifndef HIGHSAVING_H
#define HIGHSAVING_H

#include"savingAccount.h"

//Create a high interest


class highInterest : public savingAccount
{
    public:

    highInterest(string newName, double newBalance, int newAccNum);
    ~highInterest();


    

    // virtual void  editMenu();

    private:
    static  double  minmumBalance;




};

#endif //
