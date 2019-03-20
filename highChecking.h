#ifndef HIGHCHEKING_H
#define HIGHCHEKING_H

#include "noService.h"
#include <string>


class highCheking:public noService

{

    public:
    highCheking(string newName, double newBalance, int newAccNum);
    ~highCheking();

    virtual void displayInfo();
    virtual void writeCheck();

 
};




#endif