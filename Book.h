#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H
class Book
{
public:
    Book(string, Author, double);
    Book(string , Author , double, int);

    string getName();
    Author getAuthor();
    void setPrice (double );
    double getPrice();
    void setQuantity(int );
    int getQuantity();

    virtual double totalPrice() = 0;

    virtual void toString() = 0;

protected:
    double price;
    int quantity;
    string name;
    Author author;
};
#endif // BOOK_H

