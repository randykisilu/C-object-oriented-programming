#include <iostream>
using namespace std;

int main() {
    string name;
    double basicSalary;
    double bonus;
    double totalSalary;


    for (int i = 1; i <= 5; i++) {

        cout << "\nEmployee " << i << endl;

        cout << "Enter employee name: ";
        cin >> name;
        
        cout << "Enter basic salary: ";
        cin >> basicSalary;

        // Calculate bonus
        bonus = 0.05 * basicSalary;

        // Calculate total salary
        totalSalary = basicSalary + bonus;

        cout << "\nName        : " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus       : " << bonus << endl;
        cout << "Total Salary: " << totalSalary << endl;
    }

    return 0;
}