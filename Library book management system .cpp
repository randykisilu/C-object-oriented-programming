#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    int copiesAvailable;

public:

    // Function to input book details
    void inputDetails() {

        cout << "Enter book title: ";
        cin>> title;

        cout << "Enter author: ";
        cin>> author;

        cout << "Enter number of copies available: ";
        cin >> copiesAvailable;
    }

    // Function to borrow a book
    void borrowBook() {

        if (copiesAvailable > 0) {

            copiesAvailable--;

            cout << "Book borrowed successfully." << endl;

        } else {

            cout << "No copies available." << endl;
        }
    }

    // Function to display book details
    void displayDetails() {

        cout << "\n========== BOOK DETAILS ==========" << endl;
        cout << "Book Title      : " << title << endl;
        cout << "Author          : " << author << endl;
        cout << "Copies Available: "
             << copiesAvailable << endl;
        cout << "=======================" << endl;
    }
};

int main() {

    // Create an object
    Book book;

    // Input details
    book.inputDetails();

    // Borrow one copy
    book.borrowBook();

    // Display updated details
    book.displayDetails();

    return 0;
}