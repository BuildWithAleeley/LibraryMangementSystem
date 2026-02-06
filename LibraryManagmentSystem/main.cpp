#include "library.h"
#include <iostream>
using namespace std;

 int main() {
     // creating a library object

     Library lib;

//adding books to the library
        Book b1("Hamlet ", "William Shakespeare", 1603);    
        Book b2("romeo and Juliet", "William Shakespeare", 1597);

        lib.addBook(b1);   
        lib.addBook(b2);

        // searching for a book by title 
        lib.searchByTitle("Hamlet");

        // creating of a user 
        User u1(Wanaina", " 1);
            lib.addUser(u1);   

            //if user wants to borrow or return a book

            u1. borrowBook(b1);
                u1.returnBook(b1);


     return 0;
 }