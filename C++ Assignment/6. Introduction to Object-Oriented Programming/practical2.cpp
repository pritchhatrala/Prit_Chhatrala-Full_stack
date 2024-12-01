#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;  
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;  
            cout << "Withdrew: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            cout << "Withdrawal amount must be positive!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;  

    cout << "Initial Balance: " << account.getBalance() << endl;

    account.deposit(1000.0);
    cout << "Balance after deposit: " << account.getBalance() << endl;

    account.withdraw(500.0);
    cout << "Balance after withdrawal: " << account.getBalance() << endl;

    account.withdraw(600.0);
    cout << "Balance after attempted overdraw: " << account.getBalance() << endl;

    return 0;
}
