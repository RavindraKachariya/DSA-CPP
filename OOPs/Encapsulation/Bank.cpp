#include <iostream>
using namespace std;

class BankAccount
{
private:
    // Private data members (cannot be accessed directly outside the class)
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string name, double initialBalance)
    {
        accountHolder = name;
        balance = (initialBalance >= 0) ? initialBalance : 0; // Ensuring non-negative balance
    }

    // Public method to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: $" << amount << " | New Balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: $" << amount << " | New Balance: $" << balance << endl;
        }
        else
        {
            cout << "Insufficient balance or invalid amount!" << endl;
        }
    }

    // Public method to display account details
    void display()
    {
        cout << "Account Holder: " << accountHolder << " | Balance: $" << balance << endl;
    }
};

int main()
{
    // Creating an object of BankAccount
    BankAccount account("Ravindra", 1000);

    // Using public methods to interact with the private data members
    account.display();
    account.deposit(500);
    account.withdraw(300);
    account.withdraw(1500); // Should show an error message

    return 0;
}
