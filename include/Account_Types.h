#ifndef ACCOUNT_TYPES_H
#define ACCOUNT_TYPES_H

#include <iostream>
#include <vector>

using namespace std;


class Account_Types
{
    public:
        static int account_ID;
        Account_Types();

        void create_Account();
        void print_Account_Details();

        virtual void withDraw()     = 0;
        virtual void Deposit()      = 0;
        virtual void setBalance()   = 0;

        int getId();
        int getBalance();

        void setType( string type_input );

    protected:
        int ID;
        int Balance;
        string type;

    private:

};



#endif // ACCOUNT_TYPES_H
