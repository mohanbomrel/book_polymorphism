#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include "Book.h"
using namespace std;
class TextBook : public Book
{
public:
    TextBook(string &, Author &,double, int, string &, string &);

    void setSemester(string);
    string getSemester();

    void setSubject(string);
    string getSubject();

    void toString();

    double totalPrice();

private:
    string semester;
    string subject;

};
#endif // TEXTBOOK_H

