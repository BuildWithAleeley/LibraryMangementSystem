#include "Library.h"
#include <iostream>
#include <algorithm>
using namespace std;   
  
void Library::addBook(const Book& book) {
books.push_back(book);

}

void Library::removeBook(string isbn) {
    books.erase(remove_if(books.begin(), books.end(), [isbn](const Book& b) { return b.getISBN() == isbn; }), books.end());
}
void Library::searchByTitle(string title) {
    for (const auto& book : books) {
        if (book.getTitle() == title) {
            cout << "Book found: " << book.getTitle() << " by " << book.getAuthor() << endl;
            return;
        }
    }
    cout << "Book not found: " << title << endl;
}   
void Library::addUser(const User& user) {
    users.push_back(user);
}