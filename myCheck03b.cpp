/***********************************************************************
* Program:
*    Checkpoint 03b, Errors  
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*     This program prompts the user for a number and displays 
*     the number, but if the user enters a word instead, 
*     the program handles it gracefully and re-prompts for 
*     the number.
* ***********************************************************************/

#include <iostream>
#include <ios>    // To get stream size
#include <limits> // To get numeric limits
using namespace std;

/**********************************************************************
 * Function: prompt
 * Purpose: This function prompts the user for a number, but if 
 *          the user enters a word instead, the program handles it 
 *          gracefully and re-prompts for the number.
 ***********************************************************************/
int prompt()
{
   int num;

   cout << "Enter a number: ";
   cin >> num;

   while (cin.fail())
   {
      // clears the fail status
      cin.clear();
      // clears the buffer before taking newline
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      cout << "Invalid input.";
      cout << endl;

      // Reprompts for a number
      cout << "Enter a number: ";
      cin >> num;
   }

   return num;
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   int number;

   // Prompts for a number and accepts the number
   number = prompt();

   // Displays the number
   cout << "The number is ";
   cout << number;
   cout << ".";

   cout << endl;
   return 0;
}
