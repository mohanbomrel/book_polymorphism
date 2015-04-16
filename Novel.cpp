#include <iostream>
#include "Novel.h"
#include <string>


using namespace std;

Novel::Novel (string &name, Author &author,double price, int quantity,int pages,string &publication)
:Book(name,author,price,quantity)
{
    setPages(pages);
    setPublication(publication);
}

void Novel::setPages(int pages)
{
    this->pages  = pages;
}

int Novel::getPages()
{
    return pages;
}
void Novel::setPublication(string publication)
{
    this -> publication= publication;
}
string Novel::getPublication()
{
    return publication;
}

void Novel::toString()
{
    cout << "\n";
    cout << "Author:"<< author.getName() << endl;
    cout << "Book:" << getName()<< endl;
    cout << "Publication:" <<getPublication()<< endl;
    cout <<"Pages no:" << getPages() << "\n";
}

double Novel::totalPrice()
{
    return price * quantity;
}

