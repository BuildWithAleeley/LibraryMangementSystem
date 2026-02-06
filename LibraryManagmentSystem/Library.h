#ifndef LIBRARY_H
#define LIBRARY_H      

#include <vector>
#include "book.h" 
#include "User.h"
using namespace std;

class Library {

    private:
    vector<Book> books;
    vector<User> users;

    public:
    void addBook(const Book& book); 
    void removeBook(string isbn);
    void searchByTitle(string title);
    void addUser(const User& user);

};
#endif 
