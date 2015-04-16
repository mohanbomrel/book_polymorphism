#include <iostream>
#include <string>
#include "Author.h"
#include "Book.h"

using namespace std;

Book::Book(string bookName, Author name_author, double rate_price)
{
    name = bookName;
    author = name_author;
    setPrice(rate_price);
}

Book::Book(string bookName, Author name_author, double rate_price, int Stq_quantity)
{
    name = bookName;
    author = name_author;
    setPrice(rate_price);
    setQuantity(Stq_quantity);
}


string Book::getName()
{
    return name;
}

Author Book::getAuthor()
{
    return author;
}

void Book::setPrice(double rate_price)
{
    price = rate_price;
}

double Book::getPrice()
{
    return price;
}

void Book::setQuantity(int Stq_quantity)
{
    quantity = Stq_quantity;
}

int Book::getQuantity()
{
    return quantity;
}

//virtual string Book::toString()
//{
//    return quantity;
//}

//double Book::totalPrice()
//{
//    return 0;
//}
