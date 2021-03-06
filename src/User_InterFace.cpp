#include "User_InterFace.h"

User_InterFace::User_InterFace()
{
    this->Login();
}

void User_InterFace::Login()
{
    string password_input = "";
    while ( !key )
    {
        cout << "Enter Password to login :  ";
        cin  >> password_input;

        if ( password_input == this->password )
        {
            key = true;
            system("CLS");
        }
        else
        {
            cout << "Invalid Password\n" << endl;
            system("Pause");
            system("CLS");
        }
    }
    this->System_Execution();
}

void User_InterFace::System_Execution()
{
    cout << "\n\tWelcome in FCI Banking Management System\n" << endl;
    string choice = "";
    while ( key )
    {
        print_Menu();
        cin  >> choice;

        if      ( choice == "0" ){ key = false; break; }

        if      ( choice == "1" ){ create_Account(); }
        else if ( choice == "2" ){ list_Accounts();  }
        else if ( choice == "3" ){ withDraw();       }
        else if ( choice == "4" ){ deposit();        }
        else
        {
            cout << "Invalid Input" << endl;
        }
        system( "Pause" );
        system( "CLS" );
    }
    system( "CLS" );
    cout << "Good Bye\n\n";
}

void User_InterFace::print_Menu()
{
    cout << "1- Create New Account" << endl
         << "2- List Clients and Accounts" << endl
         << "3- WithDraw Money" << endl
         << "4- Deposit  Money" << endl
         << "0- End" << endl;
    cout << "\nEnter Your Choice :  ";
}

int User_InterFace::search_Client( Bank_Client object )
{
    int index = -1;
    for ( int i = 0; i < (int)this->clients_objects.size(); i++ )
    {
        if ( object == clients_objects[i] )
            return i;
    }
    return index;
}

void User_InterFace::create_Account()
{
    string name , add , phone , type;
    cout << "Enter The Name of The Client :  ";
    cin.ignore();
    getline( cin , name );

    cout << "Enter the Address of the Client : ";
    getline( cin , add );

    cout << "Enter the Phone number of the client : ";
    getline( cin , phone );

    while ( true )
    {
        cout << endl << "1- Banking Account "
             << endl << "2- Saving Banking Account "
             << endl << "\nEnter The Type :  ";

        cin  >> type;
        if ( type == "1" || type == "2" )
        {
            break;
        }
        else
        {
            cout << "Invalid Type\n\n";
            system( "Pasue" );
            system( "CLS" );
        }
    }

    Bank_Client custom_client( name , add , phone );
    int index = search_Client( custom_client );

    Account_Types* account;

    if ( type == "1" )
    {
        account = new Bank_Account;
        account->setType( "Basic Bank Account" );
    }
    else
    {
        account = new Saving_Bank_Account;
        account->setType( "Saving Bank Account" );
    }

    account->create_Account();
    this->Access_Accounts.push_back( account );

    if ( index == -1 )
    {
        custom_client.add_Account( account );
        this->clients_objects.push_back( custom_client );
    }
    else
    {
        this->clients_objects[ index ].add_Account( account );
    }

}

void User_InterFace::list_Accounts()
{
    int loop = clients_objects.size();

    for ( int i = 0; i < loop; i++ )
    {
        (this->clients_objects[i]).print_Client_Info();
        (this->clients_objects[i]).print_Accounts();
    }
    cout << "---------------------------------\n";
    cout << endl;
}


void User_InterFace::withDraw()
{
    int id = 0;
    cout << "Enter Id of the Account :  ";
    cin  >> id; id--;

    if ( id <= (int)Access_Accounts.size() )
    {
        cout << "---------------------------------\n";
        this->Access_Accounts[ id ]->print_Account_Details();
        this->Access_Accounts[ id ]->withDraw();
        this->Access_Accounts[ id ]->print_Account_Details();
        cout << "---------------------------------\n";
    }
    else if ( id > (int)Access_Accounts.size() )
    {
        cout << "Account Not Found" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

void User_InterFace::deposit()
{
    int id = 0;
    cout << "Enter Id of the Account :  ";
    cin  >> id; id--;

    if ( id <= (int)Access_Accounts.size() )
    {
        cout << "---------------------------------\n";
        this->Access_Accounts[ id ]->print_Account_Details();
        this->Access_Accounts[ id ]->Deposit();
        this->Access_Accounts[ id ]->print_Account_Details();
        cout << "---------------------------------\n";
    }
    else if ( id > (int)Access_Accounts.size() )
    {
        cout << "Account Not Found" << endl;
    }
    else
    {
        cout << "Invalid Input" << endl;
    }
}

bool operator== ( Bank_Client object1 , Bank_Client object2 )
{
    bool flag = true;
    if ( object1.getName()          != object2.getName()         ) flag = false;
    if ( object1.getAddress()       != object2.getAddress()      ) flag = false;
    if ( object1.getPhoneNumber()   != object2.getPhoneNumber()  ) flag = false;
    return flag;
}




