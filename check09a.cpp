/***********************************************************************
* Program:
*    Checkpoint 09a, Virtual Functions
*    Brother {Burton, Falin, Ercanbrack}, CS165
* Author:
*    your name
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

// For this assignment, for simplicity, you may put all of your classes
// in this file.

// TODO: Define your classes here


/**********************************************************************
 * Function: attachDoors
 * Purpose: This function can accept any type of Car object. It will
 *  call the appropriate functions to display the name and the doors info.
 ***********************************************************************/

// TODO: Include your attachDoors function here


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // You should not change main

   Civic civic;
   Odyssey odyssey;
   Ferrari ferrari;

   attachDoors(civic);
   attachDoors(odyssey);
   attachDoors(ferrari);

   return 0;
}


