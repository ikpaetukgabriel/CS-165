/***********************************************************************
* Program:
*    Checkpoint 08a, Inheritance
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
#include <ios>    // To get stream size
#include <limits> // To get numeric limits
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your Book class here
class Book
{
private:
   string title;
   string author;
   int publicationYear;

public:
   string const getTitle()
   {
      return title;
   }

   void setTitle(string title)
   {
      this->title = title;
   }

   string const getAuthor()
   {
      return author;
   }

   void setAuthor(string author)
   {
      this->author = author;
   }

   int const getPublicationYear()
   {
      return publicationYear;
   }

   void setPublicationYear(int publicationYear)
   {
      this->publicationYear = publicationYear;
   }

   void promptBookInfo()
   {
      string xTitle;
      string xAuthor;
      int pubYear;

      cout << "Title: ";
      getline(cin, xTitle);
      setTitle(xTitle);

      cout << "Author: ";
      getline(cin, xAuthor);
      setAuthor(xAuthor);

      cout << "Publication Year: ";
      cin >> pubYear;
      setPublicationYear(pubYear);
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   }

   void const displayBookInfo()
   {
      cout << getTitle();
      cout << " (";
      cout << getPublicationYear();
      cout << ") ";
      cout << "by ";
      cout << getAuthor();
   }
};
// TODO: Define your TextBook class here
class TextBook : public Book
{
private:
   string subject;

public:
   void setSubject(string subject)
   {
      this->subject = subject;
   }
   string const getSubject()
   {
      return subject;
   }
   void promptSubject()
   {
      string xSubject;
      cout << "Subject: ";
      getline(cin, xSubject);
      setSubject(xSubject);
   }

   void const displaySubject()
   {
      cout << "Subject: ";
      cout << getSubject();
   }
};
// TODO: Add your PictureBook class here
class PictureBook : public Book
{
private:
   string illustrator;

public:
   void setIllustrator(string illustrator)
   {
      this->illustrator = illustrator;
   }
   string const getIllustrator()
   {
      return illustrator;
   }
   void promptIllustrator()
   {
      string xillustrator;
      cout << "Illustrator: ";
      getline(cin, xillustrator);
      setIllustrator(xillustrator);
   }

   void const displayIllustrator()
   {
      cout << "Illustrated by ";
      cout << getIllustrator();
   }
};
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare a Book object here and call its methods
   Book book;
   book.promptBookInfo();
   cout << endl;
   book.displayBookInfo();
   cout << endl;
   cout << endl;

   // Declare a TextBook object here and call its methods
   TextBook textBook;
   textBook.promptBookInfo();
   textBook.promptSubject();
   cout << endl;
   textBook.displayBookInfo();
   cout << endl;
   textBook.displaySubject();
   cout << endl;
   cout << endl;

   // Declare a PictureBook object here and call its methods
   PictureBook pictureBook;
   pictureBook.promptBookInfo();
   pictureBook.promptIllustrator();
   cout << endl;
   pictureBook.displayBookInfo();
   cout << endl;
   pictureBook.displayIllustrator();
   cout << endl;

   return 0;
}
