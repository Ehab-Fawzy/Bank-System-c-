#include "Bank_Account.h"

Bank_Account::Bank_Account()
{

}

void Bank_Account::withDraw()
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
    }
}

void Bank_Account::Deposit()
{
    int value;
    cout << "Enter the value you want to Deposit :  ";
    cin  >> value;

    if ( value >= 0 )
    {
        this->Balance += value;
        /** Message **/
    }
    else
    {
        cout << "Invalid Input" << endl;
        system( "Pause" );
    }
}

void Bank_Account::setBalance()
{
    int balance_input = 0;
    cout << "Enter The Balance :  ";
    cin  >> balance_input;

    if ( balance_input >= 0 )
    {
        this->Balance = balance_input;
        /** message **/
    }
    else
    {
        this->account_ID -= 1;
        cout << "Invalid Balance" << endl;
        system("Pause");
    }

}
