#include "Saving_Bank_Account.h"

void Saving_Bank_Account::withDraw()
{
    int value;
    cout << "Enter the Value you want to withdraw :  ";
    cin  >> value;

    if ( value <= this->Balance )
    {
        this->Balance -= value;
        /** Message **/
    }
    else
    {
        cout << "Sorry Your Balance is less than the value you want to Withdraw" << endl;
        system( "Pause" );
    }
}

void Saving_Bank_Account::Deposit()
{
    int value;
    cout << "Enter the value you want to Deposit :  ";
    cin  >> value;

    if ( value >= this->Deposit_Value )
    {
        this->Balance += value;
        /** Message **/
    }
    else if ( value < 0 )
    {
        cout << "Invalid Input" << endl;
        system( "Pause" );
    }
    else if ( value < this->Deposit_Value )
    {
        cout << "The Value you want to deposit is less than the minimum value" << endl;
    }
}

void Saving_Bank_Account::setBalance()
{
    int balance_input = 0;
    cout << "Enter The Balance :  ";
    cin  >> balance_input;

    if ( balance_input >= this->intial_Balance )
    {
        this->Balance = balance_input;
        /** message **/
    }
    else
    {
        account_ID -= 1;
        cout << "The balance value is less than the initial value" << endl;
    }

}
