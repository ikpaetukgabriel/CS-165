/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Creates a vector of integers
   vector<int> my_numbers;

   int num;

   // Get integer inputs
   do
   {
      cout << "Enter int: ";
      cin >> num;
      if (num != 0)
         my_numbers.push_back(num);
   }
   // until user enters zero
   while (num != 0);

   cout << "Your list is:" << endl;
   // Iterates through the vector and displays each integer
   for (int i = 0; i < my_numbers.size(); i++)
   {
      cout << my_numbers[i] << endl;
   }

   cout << endl;
   // Creates a vector of strings
   vector<string> my_strings;

   string str;

   // Get string inputs
   do
   {
      cout << "Enter string: ";
      cin >> str;
      if (str != "quit")
         my_strings.push_back(str);
   }
   // until user enters "quit"
   while (str != "quit");

   cout << "Your list is:" << endl;
   // Iterates through the vector and displays each string
   for (int j = 0; j < my_strings.size(); j++)
   {
      cout << my_strings[j] << endl;
   }
   return 0;
}
