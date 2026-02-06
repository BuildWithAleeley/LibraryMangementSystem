#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {

private:
    string title;
    string author;
    string isbn:
    
    bool isborrowed;


public: 
 Book(string t, string a, string i);
  string getTitle() const; 
  string getAuthor() const; string getISBN() const;
   bool getStatus() const; 
   void borrowBook();
    void returnBook();

};

#endif
