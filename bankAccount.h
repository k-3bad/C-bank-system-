#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H


#include <string>

using namespace std;
//This is an abstract class

class bankAccount
{
  public:
    bankAccount(string newName, double newBalance, int newAccNum);
    ~bankAccount();

    string getName();
    void setName(string newName);

    double getBalance();
    void setBalance(double newBalance);

    int  getAccountNum();
    void setAccountNum(int newAccNum);

    string getAccountType()const;
    void   setAccountType(string newType);

    virtual void editMenu()=0;
    virtual void displayInfo();
     

  private:
    string name;
    double balance;
    int accountNum;
    string accountType;

};

#endif // BANKACCOUNT_H
