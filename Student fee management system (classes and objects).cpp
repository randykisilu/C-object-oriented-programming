#include <iostream>
using namespace std;

class Student {
private:
    string studentName;
    string admissionNumber;
    float feeBalance;

public:

    // Function to input student details
    void inputStudent() {

        cout << "Enter student name: ";
        cin>> studentName;

        cout << "Enter admission number: ";
        cin>> admissionNumber;

        cout << "Enter fee balance: ";
        cin >> feeBalance;
    }

    // Function to make payment
    void makePayment() {

        double payment;

        cout << "Enter payment amount: ";
        cin >> payment;

        if (payment <= 0) {

            cout << "Invalid payment amount." << endl;

        }
        else if (payment > feeBalance) {

            cout << "Payment cannot be greater "
                 << "than the fee balance." << endl;

        }
        else {

            feeBalance = feeBalance - payment;

            cout << "Payment processed successfully."
                 << endl;
        }
    }

    // Function to display fee status
    void displayStatus() {

        

        cout << "\n========== STUDENT FEE STATUS =========="
             << endl;

        cout << "Student Name    : "
             << studentName << endl;

        cout << "Admission Number:  "                                                                
             << admissionNumber << endl;

        cout << "Remaining Balance: "
             << feeBalance << endl;

        cout << "======================"
             << endl;
    }
};

int main() {

    // Create object
    Student student;

    // Input student details
    student.inputStudent();

    // Process payment
    student.makePayment();

    // Display updated status
    student.displayStatus();

    return 0;
}