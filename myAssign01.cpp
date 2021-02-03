/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy         
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    This program compares user DNA with his or her relatives in order
*    to take a percentage match.
*    Estimated:  4.0 hrs   
*    Actual:     5.0 hrs
*      The most difficult part was to compute the match percentage.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/

string getDnaSequence();

int getNumPotRelatives();

void getNameOfRelatives(string listOfRelatives[], int numPotRelatives);

void getDnaSequenceRelatives(string listOfRelatives[],
                             string listOfDnaSequence[], int numPotRelatives);

void checkMatch(string listOfDnaSequence[], int numPotRelatives,
                string userDNAseq, int result[]);

void displayResult(int result[], string listOfRelatives[],
                   int numPotRelatives);

/**********************************************************************
 *  main() calls other functions in order to compare and compute
 *  the percentage that the user has in comparison with his or 
 * her relatives   
 ***********************************************************************/
int main()
{
   // variable declarations
   string userDNAseq;
   int numPotRelatives;
   int result[numPotRelatives];
   string listOfRelatives[50];
   string listOfDnaSequence[50];

   userDNAseq = getDnaSequence();
   numPotRelatives = getNumPotRelatives();

   getNameOfRelatives(listOfRelatives, numPotRelatives);
   getDnaSequenceRelatives(listOfRelatives, listOfDnaSequence,
                           numPotRelatives);
   checkMatch(listOfDnaSequence, numPotRelatives, userDNAseq, result);
   displayResult(result, listOfRelatives, numPotRelatives);

   return 0;
}

/**********************************************************************
 *  getDnaSequence() gets the user DNA sequence
 ***********************************************************************/
string getDnaSequence()
{
   string dnaSeq;
   // Prompts the user for a 10 character DNA marker sequence
   cout << "Enter your DNA sequence: ";
   cin >> dnaSeq;

   return dnaSeq;
}

/**********************************************************************
 *  getNumPotRelatives() returns how many relatives to compare
 ***********************************************************************/
int getNumPotRelatives()
{
   int numPotRel;
   // Prompts the user for a number of potential relatives
   cout << "Enter the number of potential relatives: ";
   cin >> numPotRel;

   return numPotRel;
}

/**********************************************************************
 *  getNameOfRelatives() gets relatives names
 ***********************************************************************/
void getNameOfRelatives(string listOfRelatives[], int numPotRelatives)
{

   string nameOfRelative;
   cout << "\n";
   for (int i = 0; i < numPotRelatives; ++i)
   {
      // Prompt for the names of each of these potential relatives
      cout << "Please enter the name ";
      cout << "of relative #";
      cout << i + 1;
      cout << ": ";
      cin >> nameOfRelative;
      listOfRelatives[i] = nameOfRelative;
   }
}

/**********************************************************************
 *  getDnaSequenceRelatives() gets each relatives DNA sequence for 
 * comparison in main()
 ***********************************************************************/
void getDnaSequenceRelatives(string listOfRelatives[],
                             string listOfDnaSequence[], int numPotRelatives)
{
   string dnaSequenceRel;
   cout << "\n";
   for (int i = 0; i < numPotRelatives; ++i)
   {
      // Prompt for the 10 character DNA marker sequence of each of the
      //  potential relatives
      cout << "Please enter the DNA sequence for ";
      cout << listOfRelatives[i];
      cout << ": ";
      cin >> dnaSequenceRel;
      listOfDnaSequence[i] = dnaSequenceRel;
   }
}

/**********************************************************************
 *  checkMatch() gets each relatives DNA sequence and compares it with
 *  the user's DNA to come up with a percentage match, and saves the 
 *  result in an array
 ***********************************************************************/
void checkMatch(string listOfDnaSequence[], int numPotRelatives,
                string userDNAseq, int result[])
{
   int match = 0;
   for (int i = 0; i < numPotRelatives; i++)
   {

      for (int j = 0; j < 10; j++)
      {
         // computes the percentage that matches in comparison
         // with relatives
         if (userDNAseq[j] == listOfDnaSequence[i][j])
         {
            match += 10;
         }
      }
      result[i] = match;
      match = 0;
   }
}

/**********************************************************************
 *  displayResults() displays the percentage of user DNA that matches
 *  with each of the relatives
 ***********************************************************************/
void displayResult(int result[], string listOfRelatives[], int numPotRelatives)
{
   cout << "\n";
   for (int i = 0; i < numPotRelatives; ++i)
   {
      // Display each potential relative along with the percentage that
      // their sequence matched the target user
      cout << "Percent match for ";
      cout << listOfRelatives[i];
      cout << ": ";
      cout << result[i];
      cout << "%" << endl;
   }
}
