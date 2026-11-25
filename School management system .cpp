#include <iostream>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    string admissionNumber;
    string studentClass;

public:
    void inputDetails() {
        cout << "Enter student name: ";
        cin >> name;;

        cout << "Enter age: ";
        cin >> age;
        cin.ignore();

        cout << "Enter admission number: ";
        getline(cin, admissionNumber);

        cout << "Enter class: ";
        getline(cin, studentClass);
    }

    void displayStudent() {
        cout << "\nSTUDENT DETAILS" << endl;
        displayPerson();

        cout << "Admission Number: " << admissionNumber << endl;
        cout << "Class: " << studentClass << endl;
    }
};

int main() {
    Student student;

    student.inputDetails();
    student.displayStudent();

    return 0;
}
