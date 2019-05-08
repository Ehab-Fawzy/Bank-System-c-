#ifndef BANK_CLIENT_H
#define BANK_CLIENT_H

#include "Account_Types.h"

#include <iostream>
#include <vector>

using namespace std;

class Bank_Client
{
    public:
        Bank_Client();
        Bank_Client( string , string , string );

        void setDetails( string , string , string );
        string getName();
        string getAddress();
        string getPhoneNumber();
        void   print_Accounts();
        void   add_Account( Account_Types* ptr );
        void   print_Client_Info();

    protected:
        vector < Account_Types* > Accounts;
        string client_Name;
        string Address;
        string PhoneNumber;
    private:
};



#endif // BANK_CLIENT_H
