#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include "Account_Types.h"

#include <iostream>
#include <vector>


using namespace std;

class Bank_Account : public Account_Types
{
    public:
        Bank_Account();
        void withDraw();
        void Deposit();
        void setBalance();

    protected:


    private:
};

#endif // BANK_ACCOUNT_H
