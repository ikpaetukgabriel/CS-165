/********************************************************************
 * File: date.h
 * Purpose: Holds the definition of the Date class.
 ********************************************************************/

#ifndef DATE_H
#define DATE_H

// put your class definition here
// along with the data members, and method prototypes

class Date
{
private:
    int month;
    int day;
    int year;

public:
    // Accepts a month, day, and year, and sets the member variables.
    void set(int m, int d, int y);

    // Displays the date in the format: mm/dd/yyyy.
    void displayAmerican();

    // Displays the date in the format: dd/mm/yyyy.
    void displayEuropean();

    //  Displays the date in the format: yyyy-mm-dd.
    void displayISO();
};

#endif