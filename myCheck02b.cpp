/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Declares two objects of type Complex called c1 and c2.
*    Prompts twice to fill in the values for c1 and c2,
*    Calls addComplex function to produce the sum and
*    Calls  display function to display the sum.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
   double real;
   double imaginary;
};

/**********************************************************************
 * Function: prompt
 * Purpose: prompts for the real and imaginary part of the number
 ***********************************************************************/
// TODO: Add your prompt function here
Complex prompt(Complex &c)
{
   cout << "Real: ";
   cin >> c.real;
   cout << "Imaginary: ";
   cin >> c.imaginary;

   return (c);
}

/**********************************************************************
 * Function: display
 * Purpose: Displays the sum of the two complex numbers.
 ***********************************************************************/
// TODO: Add your display function here
void display(const Complex &sum)
{
   cout << sum.real;
   cout << " + ";
   cout << sum.imaginary;
   cout << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex &x, const Complex &y)
{
   // TODO: Fill in the body of the add function
   Complex sum;
   sum.real = x.real + y.real;
   sum.imaginary = x.imaginary + y.imaginary;

   return (sum);
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;
   // Call your prompt function twice to fill in c1, and c2
   c1 = prompt(c1);

   // Declare another Complex for the sum
   c2 = prompt(c2);

   // Call the addComplex function, putting the result in sum;
   Complex sum = addComplex(c1, c2);

   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;

   return 0;
}
