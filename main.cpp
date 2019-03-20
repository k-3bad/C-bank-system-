#include <iostream>
#include <vector>
#include <string>
#include "bankAccount.cpp"
#include "savingAccount.cpp"
#include "highInterest.cpp"
#include "checkingAccount.cpp"
#include "servCharegCheck.cpp"
#include "noService.cpp"
#include "highChecking.cpp"
#include "cetrificate.cpp"

using namespace std;



namespace typeOfAccount
{
string saving="saving";
string highInterest="highInterest";
string checkingAccount="checkingAccount";
string servCharegCheck="servCharegCheck";
string noService="noService";
string highCheking="highCheking";
string certificate="certificate";

};

//make struct to hold all data for the system
struct Info
{
    int accountNumCounter;

    vector<savingAccount> saving_Accounts;
  	vector<highInterest> high_intrest;
    vector<checkingAccount> checking_Account;
    vector<servCharegCheck>  serv_chareg;
    vector<noService> no_service;
    vector<highCheking> high_cheking;
    vector<certificate> certifi_cate;
};

Info info; //Here all structures stored

//Here we Declare all functions
void ToCreate();
void creatNewAccount(string);
template <class accountType>
bool searchAccount(vector<accountType>, int &);
void editAccount();
void deleteAcount(string, int);
void printAll();

int main()
{

    int choise = 0;
    info.accountNumCounter = 1;
    while (choise != 3)
    {

        cout << "\n\n\nWelcome to the bank system, please choose one of the following: ";
        cout << "\n1.Create new Account "
             << "\n2.Edit an Account "
             << "\n3.Exit " << endl
             << "Enter a value:";

        cin >> choise;

        switch (choise)
        {
        case 1:
            ToCreate();
            break;
        case 2:
            editAccount();
            break;
        case 3:
            break;
        default:
            cout << "\nWrong entry, try again please" << endl
                 << endl;
        }
    }

    return 0;
}

//This will create account and fill it with data

void ToCreate()
{

    int dis;
    while (dis != 8)
    {
        cout << "\nwhat type of account you want to create? "
             << "\n1.Saving account" << endl
             << "\n2.High interst account" << endl
             << "\n3.checking account " << endl
              << "\n4.service charge checking " << endl
             << "\n5.No service charge checking " << endl
             << "\n6.High checking account " << endl
             << "\n7.certificate of deposit " << endl
             << "\n8. Back to the main menu " << endl
             <<endl<<"Enter a value:";
        cin >> dis;

        switch (dis)
        {
        case 1:
            creatNewAccount(typeOfAccount::saving);
            return;break;
            
        case 2:
            creatNewAccount(typeOfAccount::highInterest);
            return;break;

        case 3:
        creatNewAccount(typeOfAccount::checkingAccount);
            return;break;



        case 4:
        creatNewAccount(typeOfAccount::servCharegCheck);    
            return;break;

        case 5:
        creatNewAccount(typeOfAccount::noService);    
            return;break;

        case 6:
        creatNewAccount(typeOfAccount::highCheking);    
            return;break;
        case 7:
        creatNewAccount(typeOfAccount::certificate);    
            return;break;


        case 8:   
            return;break;
                
            
        default:
            cout << "\nWrong entry, please try again";
            break;
        }
    }
}

void creatNewAccount(string type) //Called from ToCreate()
{

    string newName;
    cin.ignore();
    cout << "\nEnter name:";
    getline(cin, newName);

    double balance;
    cout << "\nEnter balance:";
    cin >> balance;
    bankAccount *ptrBank = NULL;

    if (typeOfAccount::saving == type)
    {
        //create new instance of class and store it in its vector
        savingAccount *ptr = new savingAccount(newName, balance, info.accountNumCounter);
        
        info.saving_Accounts.push_back(*ptr);
        ptrBank=ptr;
       
        ptr = NULL;
    }

   else if (typeOfAccount::highInterest == type)
    {
       // create new instance of class and store it in its vector
        highInterest *ptr = new highInterest(newName, balance, info.accountNumCounter);
        info.high_intrest.push_back(*ptr);
        ptrBank=ptr;
       
        ptr = NULL;
    }
    
    
    else if (typeOfAccount::checkingAccount == type)
    {
       // create new instance of class and store it in its vector
        checkingAccount *ptr = new checkingAccount(newName, balance, info.accountNumCounter);
        info.checking_Account.push_back(*ptr);
        ptrBank=ptr;
        ptr = NULL;
    }

    else if (typeOfAccount::servCharegCheck == type)
    {
       // create new instance of class and store it in its vector
        servCharegCheck *ptr = new servCharegCheck(newName, balance, info.accountNumCounter);
        info.serv_chareg.push_back(*ptr);
        ptrBank=ptr;
        
        ptr = NULL;
    }

    
    else if (typeOfAccount::noService == type)
    {
       // check so the minmun is 2000
       if(balance<2000){cout<<endl<<endl<<"minmum balance fo this type is 2000 ";return;}

        noService *ptr = new noService(newName, balance, info.accountNumCounter);
        info.no_service.push_back(*ptr);
        ptrBank=ptr;
        
        ptr = NULL;
    }

    else if (typeOfAccount::highCheking == type)
    {
       // check so the minmun is 5000
       if(balance<5000){cout<<endl<<endl<<"minmum balance fo this type is 5000 ";return;}
       else{
        highCheking *ptr = new highCheking(newName, balance, info.accountNumCounter);
        info.high_cheking.push_back(*ptr);
        ptrBank=ptr;
        
        ptr = NULL;}

    }

    else if (typeOfAccount::certificate == type)
    {
      
       
        certificate *ptr = new certificate(newName, balance, info.accountNumCounter);
        info.certifi_cate.push_back(*ptr);
        ptrBank=ptr;
        
        ptr = NULL;

    }


    
    else
    {
        cout << "Wrong entry " << endl;
        return;
    }

    ptrBank->displayInfo();

    info.accountNumCounter++; //Increase after creation
}

void editAccount()
{
    int accNUmb;
    cout << "What is the account number? ";
    cin >> accNUmb; //To hold a number to look for, it found then this will hold the order in the vector
    bool found = false;
    bankAccount *ptr = NULL; //After searching, if the account found this will point to it
                             // string accountType;//used as parameter for delete function, to indicate the type of the account

    if (searchAccount<savingAccount>(info.saving_Accounts, accNUmb))
    {
        ptr = &info.saving_Accounts[accNUmb];

        cout << endl
             << "The account is ready, ";
        ptr->editMenu();

        found = true;
    }
    
   else if (searchAccount<highInterest>(info.high_intrest, accNUmb))
    {
        ptr = &info.high_intrest[accNUmb];

        cout << endl
             << "The account is ready, ";
        ptr->editMenu();

        found = true;
    }

      else if (searchAccount<checkingAccount>(info.checking_Account, accNUmb))
    {
        ptr = &info.checking_Account[accNUmb];

        cout << endl
             << "The account is ready, ";
        ptr->editMenu();

        found = true;
    }

       else if (searchAccount<servCharegCheck>(info.serv_chareg, accNUmb))
    {
        ptr = &info.serv_chareg[accNUmb];

        cout << endl
             << "The account is ready, "<<endl<<endl;
        ptr->editMenu();

        found = true;
    }

         else if (searchAccount<noService>(info.no_service, accNUmb))
    {
        ptr = &info.no_service[accNUmb];

        cout << endl
             << "The account is ready, "<<endl<<endl;
        ptr->editMenu();

        found = true;
    }

          else if (searchAccount<highCheking>(info.high_cheking, accNUmb))
    {
        ptr = &info.high_cheking[accNUmb];

        cout << endl
             << "The account is ready, "<<endl<<endl;
        ptr->editMenu();

        found = true;
    }

    
          else if (searchAccount<certificate>(info.certifi_cate, accNUmb))
    {
        ptr = &info.certifi_cate[accNUmb];

        cout << endl
             << "The account is ready, "<<endl<<endl;
        ptr->editMenu();

        found = true;
    }


    else if (!found)
    {
        cout << "\nThe account was not found ";
        return;
    }

    return;
}

template <class accountType>
bool searchAccount(vector<accountType> accounts, int &accNUmb)
{
    for (int i = 0; i < accounts.size(); i++)
    {
        if (accounts[i].getAccountNum() == accNUmb)
        {
            accNUmb = i;
            return true;
        }
    }
    return false;
}

void deleteAcount(string type, int index) //Delete an account,pass type so the function choose proper container,
{

    if (type == "saving")
    {
        vector<savingAccount>::iterator it = info.saving_Accounts.begin();

        info.saving_Accounts.erase(it + index);
        cout << "Account Deleted" << endl
             << endl
             << endl;
    }
}

void printAll()
{

    for (int i = 0; i < info.saving_Accounts.size(); i++)
    {
        info.saving_Accounts[i].displayInfo();
    }
}
