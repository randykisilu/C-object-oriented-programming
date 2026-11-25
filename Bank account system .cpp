
#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, int number, double amount) {
        accountHolder = name;
        accountNumber = number;
        balance = amount;

        cout << "Account successfully created" << endl;
    }

    // Display account details
    void displayAccount() {
        cout << "\nACCOUNT DETAILS" << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: " << balance << endl;
    }

    // Destructor
    BankAccount() {
        cout << "\nAccount closed successfully" << endl;
    }
};

int main() {
    string name;
    int number;
    double balance;

    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter account number: ";
    cin >> number;

    cout << "Enter account balance: ";
    cin >> balance;

    BankAccount account(name, number, balance);

    account.displayAccount();

    return 0;
}
