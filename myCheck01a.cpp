/***********************************************************************
* Program:
*    Checkpoint 01a, C++ Basics            
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   //Variable declaration
   int age;
   string name;
   //Displays the welcome text
   cout << "Hello ";
   cout << "CS ";
   cout << "165 ";
   cout << "World!";
   cout << endl;

   //Gets the user's name
   cout << "Please enter ";
   cout << "your first name: ";
   cin >> name;

   //Gets the user's age
   cout << "Please enter ";
   cout << "your age: ";
   cin >> age;
   cout << endl;

   //Displays the user details
   cout << "Hello " + name + ", you are ";
   cout << to_string(age) + " years old.";

   return 0;
}