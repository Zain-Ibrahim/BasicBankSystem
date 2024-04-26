#include "bank.h"

int main()
{
    // Object of class
    Bank b;
 
    int choice;
 
    // Infinite loop to choose "Super loop", options everytime
    while (1) {
        cout << "\n--------------------------"
             << "-----------WELCOME----------"
             << "------------------------\n\n";
        cout << "Enter Your Choice:\n";
        cout << "\t1. Create New Account\n";
        cout << "\t2. Show Account Data\n";
        cout << "\t3. Deposit Money\n";
        cout << "\t4. Show Total balance\n";
        cout << "\t5. Withdraw Money\n";
        cout << "\t6. Cancel\n";
        cout << "\nYour Choise:";
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            cout << "Thank you for banking with us!:)\n";
	    exit(1);
            break;
        default:
            cout << "\nInvalid choice\n";
        }
    }
}
