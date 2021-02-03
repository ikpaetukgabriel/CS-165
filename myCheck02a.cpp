/***********************************************************************
* Program:
*    Checkpoint 02a, Structs       
*    Brother Alvey, CS165
* Author:
*    Gabriel Ikpaetuk
* Summary: 
*    Declares a Student struct called "user".
*    Prompts the user for their first name, last name, and id number, 
*    and saves these values into the "user" struct. Passes the user 
*    struct to the display function to be displayed.
* ***********************************************************************/

#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Struct: Student
 * Purpose: contains the variable for a student struct.
 ***********************************************************************/
struct Student
{
    string firstName;
    string lastName;
    int id;
};

void displayStudent(Student);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
    Student user;

    //Prompts for the student details
    cout << "Please enter your first name: ";
    cin >> user.firstName;
    cout << "Please enter your last name: ";
    cin >> user.lastName;
    cout << "Please enter your id number: ";
    cin >> user.id;

    cout << "\n";
    displayStudent(user);

    return 0;
}

/**********************************************************************
 * Function: displayStudent
 * Purpose: This displays the various details of the student.
 ***********************************************************************/
void displayStudent(Student user)
{
    //Displays the student details
    cout << "Your information:" << endl;
    cout << user.id;
    cout << " - ";
    cout << user.firstName;
    cout << " ";
    cout << user.lastName << endl;
}