/**********************************************************************
 * File: ta03.cpp
 * Author: Gabriel Ikpaetuk
 *
 * Description: Use this file as a starting point for Team Activity 03.
 *    You do not need to "submit" your code, but rather, answer the
 *    questions in the I-Learn assessment.
 **********************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

/***********************************************************************
 * Struct: Scripture
 * Description: Holds the reference to a scripture (book, chapter, verse
 ***********************************************************************/
struct Scripture
{
   int bookNumber;
   string book;
   int chapter;
   int startVerse;
   int endVerse;
};

/***********************************************************************
 * Function: display
 * Description: Displays the passed scripture.
 ***********************************************************************/
void display(const Scripture &scripture)
{
   if (scripture.bookNumber == 0)
   {
      if (scripture.endVerse == 0)
      {
         cout << scripture.book << " ";
         cout << scripture.chapter << ":";
         cout << scripture.startVerse;
      }
      else
      {
         cout << scripture.book << " ";
         cout << scripture.chapter << ":";
         cout << scripture.startVerse << "-";
         cout << scripture.endVerse;
      }
   }
   else
   {
      if (scripture.endVerse == 0)
      {

         cout << scripture.bookNumber << " ";
         cout << scripture.book << " ";
         cout << scripture.chapter << ":";
         cout << scripture.startVerse;
      }
      else
      {
         cout << scripture.bookNumber << " ";
         cout << scripture.book << " ";
         cout << scripture.chapter << ":";
         cout << scripture.startVerse << "-";
         cout << scripture.endVerse;
      }
   }
}

/***********************************************************************
 * Function: readFile
 * Description: reads a file
 ***********************************************************************/
void readFile(const string &fileName, Scripture &scripture)
{
   fstream filer;
   stringstream ss;
   string line;

   filer.open(fileName);

   if (filer.fail())
   {
      cout << "File does not exist" << endl;
      return;
   }

   while (!filer.eof())
   {
      getline(filer, line);

      ss << line;

      if (isdigit(line.at(0)))
      {
         ss >> scripture.bookNumber >> scripture.book >> scripture.chapter >> scripture.startVerse >> scripture.endVerse;
      }
      else
      {
         ss >> scripture.book >> scripture.chapter >> scripture.startVerse >> scripture.endVerse;

         scripture.bookNumber = 0;
         ss.clear();
      }
      display(scripture);
      cout << endl;
   }

   filer.close();
}

/***********************************************************************
 * Function: prompt
 * Description: prompts for a file name.
 ***********************************************************************/
void prompt(string &fileName)
{
   cout << "Enter file name: ";
   cin >> fileName;
}

/***********************************************************************
 * Function: main
 * Description: The driver for the program.
 ***********************************************************************/
int main()
{
   string fileName;

   Scripture scripture;

   // Insert your code here to prompt for the name of a file
   prompt(fileName);

   // and pass it to a readFile function
   readFile(fileName, scripture);

   return 0;
}
