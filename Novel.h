#ifndef NOVEL_H
#define NOVEL_H
#include <string>
#include "Book.h"
using namespace std;

class Novel : public Book
{
public:
    Novel(string &,Author &,double,int,int,string &);

    int pages;
    string publication;

    void setPages(int);
    int getPages();
    void setPublication(string);
    string getPublication();

    void toString();

    double totalPrice();
};
#endif // NOVEL_H

