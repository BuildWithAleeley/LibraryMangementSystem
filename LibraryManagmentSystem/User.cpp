#include "User.h"
#include <iostream>
using namespace std;

user::User(string n, int id) : name(n), userId(id) {}

string User::getName() const { return name;}
int User::getID() const { return userId;}   

void User::borrowBook(Book* book) {
    if (!book->getStatus()) {
        book->borrowBook();
        borrowedBooks.push_back(*book);
        cout << name << " borrowed " << book->getTitle() << endl;
    } else {
        cout << book->getTitle() << " is already borrowed." << endl;
    }
}

 void User::returnBook(Book* book) {
book->returnBook();
borrowedBooks.erase(remove(borrowedBooks.begin(), borrowedBooks.end(), book), borrowedBooks.end());
cout << name << "returned " << book->getTitle() << endl;

 }

