# include "book.h"
Book::Book(string t, string a, string i) : title(t), author(a), isbn(i), isBorrowed(false) {}

string Book::getTitle() const { return title;} 
string Book::getAuthor() const { return author;}
string Book::getISBN() const { return isbn;}

bool Book::getStatus() const { return isBorrowed;}

void Book::borrowBook() { isBorrowed = true;}
void Book::returnBook() { isBorrowed = false;}

