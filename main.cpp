#include <iostream>
#include "Book.h"
#include "Novel.h"
#include "TextBook.h"

using namespace std;

int main()
{
    string authorName, emailOf, bookName,book_publication,book_semester,book_subject;
    double priceOf;
    int stqQuantity,pages;
    char sex;

    cout << "You are about to enter the details of BOOKS written by same author" << "\n";
    cout << "Enter the name of Author:" << endl;
    getline(cin, authorName);
    cout << "Enter the gender of Author (M/F):" << endl;
    cin >> sex;
    cin.get();
    cout << "Enter the email address:" << endl;
    getline(cin,emailOf);
    Author author1(authorName,emailOf,sex);

    cout << "***Enter the details for Novel***" << "\n";
    cout <<"Enter the name of Novel:" << endl;
    cin >> bookName;
    cin.get();
    cout << "Enter the price of one book:" << endl;
    cin >> priceOf;
    cout << "Enter the quantity of book:" << endl;
    cin >> stqQuantity;
    cout << "Enter the pages of book:";
    cin >> pages;
    cout << "Enter the name of publication:" << endl;
    cin >> book_publication;


    Novel novel1(bookName,author1,priceOf,stqQuantity,pages,book_publication);
    Book *book1 = &novel1;
    book1->toString();

    cin.get();
    cout << "\n***Enter the details of TextBook***" << endl;
    cout << "Enter the name of Textbook:" << endl;
    cin >> bookName ;
    cout << "Enter the price of each book:" << endl;
    cin >> priceOf;
    cout << "Enter the quantity of book:" <<  endl;
    cin >> stqQuantity;
    cout << "Enter the semester of the book:" << endl;
    cin >> book_semester;
    cout << "Enter the subject to which it belongs:" << endl;
    cin >> book_subject;


    TextBook textbook1(bookName,author1,priceOf,stqQuantity,book_semester,book_subject);
    Book *book2 = &textbook1;
    book2->toString();

    cout << "\nThe total price for Novel priced Rs" << novel1.getPrice() << " each, for " << novel1.getQuantity() << " is Rs:" << endl;
    cout << book1->totalPrice() << "\n";
    cout << "The total price for TextBook priced Rs" << textbook1.getPrice() << " each, for " << textbook1.getQuantity() << " is Rs:"<< endl;
    cout <<book2 ->totalPrice() << "\n";
    return 0;
}
