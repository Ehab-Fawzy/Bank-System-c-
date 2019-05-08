#ifndef SAVING_BANK_ACCOUNT_H
#define SAVING_BANK_ACCOUNT_H

#include "Account_Types.h"
#include <iostream>

using namespace std;

class Saving_Bank_Account : public Account_Types
{
    public:
        void withDraw();
        void Deposit();
        void setBalance();

    protected:

    private:
        const int intial_Balance = 1000;
        const int Deposit_Value  = 100;
};

#endif // SAVING_BANK_ACCOUNT_H
