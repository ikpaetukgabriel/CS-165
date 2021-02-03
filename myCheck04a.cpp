/***********************************************************************
* Program:
*    Checkpoint 04a, CLASSES        
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;

public:
    void prompt();
    void display();
};

void Book::prompt()
{
    cout << "Title: ";
    getline(cin, title);

    cout << "Author: ";
    getline(cin, author);
}

void Book::display()
{
    cout << "\"";
    cout << title;
    cout << "\"";
    cout << " by ";
    cout << author;
    cout << endl;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{

    Book book;

    book.prompt();
    book.display();

    return 0;
}