#ifndef CERTIFICATE_H
#define CERTIFICATE_H


#include "bankAccount.h"
#include <string>


class certificate:public bankAccount
{

public:
certificate(string newName, double newBalance, int newAccNum);
~certificate();
virtual void displayInfo();
virtual void editMenu();

void setMitureMonths(int);
void setInterestRate(double);
void setCdRate(double);



int getMitureMonths();
double getInterestRate();
double getCdRate();


private:
    int miturMonths;
    double interestRate;
    double cdRate;



};














#endif