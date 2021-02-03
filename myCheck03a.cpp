/***********************************************************************
* Program:
*    Checkpoint 03a, EXCEPTIONS         
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    This program that prompts the user for a positive even number,
*    less than 100. If the user enters a number that is not valid,
*    an exception message should be thrown from one function, caught
*    in another and displayed to the user.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Function: prompt
 * Purpose: Gets a number from the user, implements try block to check 
 * for three types of exception occurences, and returns the exception
 * to main
 ***********************************************************************/
void prompt(int &num)
{
   // Prompts for a number
   cout << "Enter a number: ";
   cin >> num;

   // Checks if number is negative and throws the necessary error
   // message
   if (num < 0)
   {
      throw string("The number cannot be negative.");
   }

   // Checks if number is greater than 100 and throws the necessary error
   // message
   if (num > 100)
   {
      throw string("The number cannot be greater than 100.");
   }

   // Checks if number is odd and throws rows the necessary error
   // message
   if (num % 2 != 0)
   {
      throw string("The number cannot be odd.");
   }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program calls 
 * the prompt function.
 ***********************************************************************/
int main()
{
   // Variable declaration
   int number;

   // Tries for possible exception errors
   try
   {
      // Gets the user input
      prompt(number);

      // If no exception, displays the number
      cout << "The number is ";
      cout << number;
      cout << ".";
   }

   // Catches thrown error message
   catch (string errorMessage)
   {
      // Displays thrown error message
      cout << "Error: " << errorMessage;
   }

   cout << endl;

   return 0;
}
