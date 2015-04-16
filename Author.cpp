#include <string>
#include "Author.h"
using namespace std;

Author::Author(string nameAuthor, string emailAddress, char genderSex)
{
    name = nameAuthor;
    setEmail(emailAddress);
    gender = genderSex;

}
Author::Author()
{

}

void Author::setEmail(string emailAddress)
{
    email = emailAddress;
}

string Author::getEmail()
{
    return email;
}

string Author::getName()
{
    return name;
}
char Author::getGender()
{
    return gender;
}
string Author::toString()
{
    return getName() + " at " + getEmail();
}


