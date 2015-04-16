Please add detail to this file on how you implement polymorphism in Book and it's subclasses.

1.Overall, I have made two virtual function which shows polymorphic
behaviour named printTotal() and toString()

2.printTotal will print the total price of the book calculating price of each book and books in stock quantity

3.toString() will display the information or details which are inside the function of  subclasses ie. Novel and TextBook.

4.I have made both function as pure virtual function so that we can make Book Class (BASE CLASS) as
Abstract Class as we don't need to implement the object of Book class.

5. An object pointer book1 and book2 are used for assigning the address of object of derived class Novel and Textbook respectively.

6. then printTotal and toString is called in the main class to implement polymorphism.