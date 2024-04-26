#include "bank.h"


    //Function to set initiale values using "Default constructor"
    Bank::Bank()
    {
        name = "unknown";
        accType = "unknown";
        accNumber = 0;
        currentBalance = 0;
        depositAmount = 0;
    }


    //Function to set initiale values using "Parameterized constructor"
    Bank::Bank( string na, string ty, int anum, int cuba)
    {
        name = na;
        accType = ty;
        accNumber = anum;
        currentBalance = cuba;
        depositAmount = 0;
    }


    // Function to set the client's data
    void Bank::setvalue()
    {
        cout << "Enter Name\n";
        cin.ignore();
        // To use space in string
        getline(cin, name);

        cout << "Enter Account Number\n";
        cin >> accNumber;

        cout << "Enter Account Type\n";
        cin >> accType;

        cout << "Enter Balance\n";
        cin >> currentBalance;
        
        cout << "Data has been saved successfully\n";
    }
 

    // Function to display the required data
    void Bank::showdata()
    {
        cout << "Name:" << name << endl;
        cout << "Account No:" << accNumber << endl;
        cout << "Account Type:" << accType << endl;
        cout << "Balance:" << currentBalance << endl;
    }


    // Function to deposit the depositAmount in ATM
    void Bank::deposit()
    {
        cout << "\nEnter Amount to be added to your balance\n";
        cin >> depositAmount;
        currentBalance = currentBalance + depositAmount;
        cout << "Balance has been added successfully\n";
    }
 

    // Function to show the balance 
    void Bank::showbal()
    {
        cout << "\nTotal balance is: " << currentBalance;
    }
 

    // Function to withdraw the depositAmount in ATM
    void Bank::withdrawl()
    {
        int amount;
        cout << "Enter Amount to withdraw\n";
        cin >> amount;
        if (amount <= currentBalance)
        {
            currentBalance = currentBalance - amount;
            cout << "Available Balance is" << currentBalance;
        }
        else
        {
            cout << "No available balance\n";
        }
        
    }
