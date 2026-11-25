#include <iostream>
using namespace std;

class Payment {
public:
    // Cash payment
    void processPayment(int amount) {
        cout << "Cash Payment: " << amount << endl;
    }

    // Card payment
    void processPayment(double amount, double fee) {
        double total = amount + fee;

        cout << "Card Payment: " << total << endl;
    }

    // Mobile payment
    void processPayment(double amount, double fee, double discount) {
        double total = amount + fee - discount;

        cout << "Mobile Payment: " << total << endl;
    }
};

int main() {
    Payment payment;

    cout << "PAYMENT SYSTEM" << endl;
    payment.processPayment(10000);
    payment.processPayment(12000.0, 200.0);
    payment.processPayment(13000.0, 200.0, 300.0);

    return 0;
}
