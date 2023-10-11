#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;
    string accountName;

public:
    BankAccount() {}
    BankAccount(int accNumber, double initialBalance) : accountNumber(accNumber), balance(initialBalance) {}

    // Member function to deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited $" << amount << " into " << accountName << "'s account." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Member function to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn $" << amount << " from " << accountName << "'s account." << endl;
        }
        else
        {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Member function to get the current balance
    double getBalance()
    {
        return balance;
    }
    void setName(string name)
    {
        accountName = name;
    }
};

namespace transactions
{
    int depositAmount, withdrawAmount;
    BankAccount myAccount(12345, 0);

    void getBalance()
    {
        double currentBalance = myAccount.getBalance();
        cout << "Current balance in Account " << myAccount.getBalance() << " is $" << currentBalance << endl;
    };
    void createDeposition()
    {
        cout << "Enter amount to deposit" << endl;
        cin >> depositAmount;
        myAccount.deposit(depositAmount);
        getBalance();
    };

    void createWithdraw()
    {
        cout << "Enter amount to withdraw" << endl;
        cin >> withdrawAmount;
        myAccount.withdraw(withdrawAmount);
        getBalance();
    };

}

int main()
{
    int choice;
    string accName;

    cout << "Enter your name: " << endl;
    cin >> accName;
    BankAccount account;
    account.setName(accName);

    cout << "Options" << endl;
    cout << "1.Deposit into your account" << endl;
    cout << "2.Withdraw from your account" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        transactions::createDeposition();
        break;
    case 2:
        transactions::createWithdraw();
        break;

    default:
        cout << "Invalid choice " << endl;
    };

    return 0;
}
