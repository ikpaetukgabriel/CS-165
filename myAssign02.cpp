/***********************************************************************
* Program:
*    Assignment 02, Digital Forensics 
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    This program scan through a log to identify users who accessed files
*    in a particular window of time. It does this by getting a range of
*    time stamp from the user.
*
*    Estimated:  5.0 hrs   
*    Actual:     4.0 hrs
*      The most difficult part was making sure the program pass the 
*      style checker.
************************************************************************/

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

/**********************************************************************
 *  ACCESSRECORD
 *  a structure with users access data: username, file name, and time stamp
 ***********************************************************************/
struct AccessRecord
{
   string username;
   string filename;
   long timeStamp;
};

/************************************************************************
 * PROMPT FILENAME
 * Generic prompt function, prompts for name of file to be read
 ***********************************************************************/
void promptFilename(string &filename)
{
   cout << "Enter the access record file: ";
   cin >> filename;
}

/************************************************************************
 * READ FILE
 * Loops through the file and gets required data
 ***********************************************************************/
void readFile(string filename, AccessRecord myList[])
{
   ifstream reader;

   reader.open(filename);

   // Handles error, incase fill doesn't exist
   if (reader.fail())
   {
      cerr << "Error reading file. File may not exists" << endl;
      return;
   }

   int counter = 0;

   // Loops until the end of file
   while (!reader.eof())
   {
      reader >> myList[counter].filename >>
          myList[counter].username >> myList[counter].timeStamp;

      counter++;
   }

   reader.close();
}

/************************************************************************
 * GET TIME RANGE A
 * Gets the time stamp start time
 ***********************************************************************/
long getTimeRangeA()
{
   long startTime;
   cout << "Enter the start time: ";
   cin >> startTime;

   // Returns the start time stamp to main
   return startTime;
}

/************************************************************************
 * GET TIME RANGE B
 * Gets the time stamp end time
 ***********************************************************************/
long getTimeRangeB()
{
   long endTime;
   cout << "Enter the end time: ";
   cin >> endTime;

   // Returns the end time stamp to main
   return endTime;
}

/************************************************************************
 * DISPLAY RECORDS
 * Display filtered set of records in a tabular form
 ***********************************************************************/
void displayRecords(long &timeRangeA, long &timeRangeB, AccessRecord myList[])
{
   cout << "The following records match your criteria:\n";
   cout << "\n";

   cout << setw(15) << "Timestamp";
   cout << " ";
   cout << setw(19) << "File";
   cout << " ";
   cout << setw(19) << "User" << endl;
   cout << "---------------";
   cout << " ";
   cout << "-------------------";
   cout << " ";
   cout << "-------------------" << endl;

   // Loops through to display the each detail from set of record
   for (int i; i < 500; i++)
   {

      // Filters data set for needed data
      if ((myList[i].timeStamp >= timeRangeA) &&
          (myList[i].timeStamp <= timeRangeB))
      {

         cout << setw(15) << myList[i].timeStamp;
         cout << " ";
         cout << setw(19) << myList[i].filename;
         cout << " ";
         cout << setw(19) << myList[i].username;
         cout << endl;
      }
   }
   cout << "End of records" << endl;
}

/************************************************************************
 * MAIN
 * Used to initialize common variables and calls the required functions
 ***********************************************************************/
int main()
{

   // Variables and array Declaration
   AccessRecord myList[500];
   string filename;
   long timeRangeA;
   long timeRangeB;

   // Prompts user for file name
   promptFilename(filename);

   cout << endl;

   // Reads through the file
   readFile(filename, myList);

   // Gets time stamp start time
   timeRangeA = getTimeRangeA();

   // Gets time stamp end time
   timeRangeB = getTimeRangeB();

   cout << "\n";

   // Displays the record in a tabular form
   displayRecords(timeRangeA, timeRangeB, myList);

   return 0;
}