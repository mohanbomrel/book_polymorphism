#include <iostream>
#include "TextBook.h"
#include <string>

using namespace std;

TextBook::TextBook(string &name, Author &author,double price, int quantity,string &semester,string &subject)
:Book(name,author,price,quantity)
{
    setSemester(semester);
    setSubject(subject);
}

void TextBook::setSemester(string semester)
{
        this ->semester = semester;
}

string TextBook::getSemester()
{
    return semester;
}

void TextBook::setSubject(string subject)
{
    this ->subject = subject;
}

string TextBook::getSubject()
{
    return subject;
}

void TextBook::toString()
{
    cout << "\n";
    cout << "Book:" << getName()<< endl;
    cout << "Price per Book:" << price << endl;
    cout << "Quantity:" << quantity << endl;
    cout << "Subject:" << getSubject()<< endl;
    cout << "Semester:" << getSemester()<< endl;

}

double TextBook::totalPrice()
{
    return quantity*price;
}



