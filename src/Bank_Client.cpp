#include "Bank_Client.h"

#include <iostream>
using namespace std;


Bank_Client::Bank_Client()
{
    this->client_Name   = "";
    this->Address       = "";
    this->PhoneNumber   = "";
}

Bank_Client::Bank_Client( string name , string address , string phone )
{
    this->setDetails( name , address , phone );
}

void Bank_Client::setDetails( string name , string address , string phone )
{
    this->client_Name   = name;
    this->Address       = address;
    this->PhoneNumber   = phone;
}

string Bank_Client::getName()
{
    return this->client_Name;
}
string Bank_Client::getAddress()
{
    return this->Address;
}
string Bank_Client::getPhoneNumber()
{
    return this->PhoneNumber;
}

void   Bank_Client::print_Accounts()
{
    int loop = this->Accounts.size();
    for ( int i = 0; i < loop; i++ )
    {
        cout << "-----------\n";
        Accounts[i]->print_Account_Details();
        //cout << "-----------\n";
    }
}

void   Bank_Client::add_Account( Account_Types* ptr )
{
    this->Accounts.push_back( ptr );
}

void   Bank_Client::print_Client_Info()
{
    cout << "---------------------------------\n";
    cout << "Name         : " << this->client_Name  << endl
         << "Address      : " << this->Address      << endl
         << "Phone Number : " << this->PhoneNumber  << endl;
}


