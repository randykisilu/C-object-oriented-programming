#include <iostream>
using namespace std;

int main() {
    const string correctUsername = "randy";
    const string correctPassword = "randy3223";

    string username;
    string password;

    do {
        cout << "Enter username: ";
        cin >> username;

        cout << "Enter password: ";
        cin >> password;

        if (username == correctUsername &&
            password == correctPassword) {

            cout << "Access Granted" << endl;

        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername ||
             password != correctPassword);

    return 0;
}