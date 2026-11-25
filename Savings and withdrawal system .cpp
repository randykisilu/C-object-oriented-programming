#include <iostream>
using namespace std;

int main() {
    double balance;
    double withdrawal;

    cout << "Enter account balance: ";
    cin >> balance;

    while (balance > 0) {

        cout << "\nEnter withdrawal amount: ";
        cin >> withdrawal;

        if (withdrawal > balance) {
            cout << "Withdrawal amount is greater than the balance." << endl;
            break;
        }

        if (withdrawal <= 0) {
            cout << "Enter a valid positive amount." << endl;
            continue;
        }

        balance = balance - withdrawal;

        cout << "Remaining balance: " << balance << endl;

        if (balance == 0) {
            cout << "Balance is zero. Transaction stopped." << endl;
        }
    }

    return 0;
}