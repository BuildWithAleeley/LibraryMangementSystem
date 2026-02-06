#ifndef USER_H
#define USER_H

#include <string>
#include <vector>   
#include "book.h"
using namespace std;

class user {
    privaate:

    string name;
    int userID;
    vector<Book> borrowedBooks;

    public:
    User(string n, int id);
    string getName() const;
    int getID() const;
    void borrowBook(Book* book);
    void returnBook(Book* book);

};

#endif

