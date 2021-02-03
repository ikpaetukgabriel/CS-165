#include <iostream>
#include <string>
using namespace std;

/**********************************************************************
 * Function: getSize
 * Purpose: This is gets the size of the array from the user.
 ***********************************************************************/
int getSize()
{
    //Variable declaration
    int size_of_array;
    //Gets size of the array from the user to declare the array size;
    cout << "Enter the size of the list: ";
    cin >> size_of_array;

    return size_of_array;
}

/**********************************************************************
 * Function: getList
 * Purpose: This is allows the user to enter numbers into the array.
 ***********************************************************************/
void getList(int my_array[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << "Enter number for index " + to_string(i) + ": ";
        cin >> my_array[i];
    }
}

/**********************************************************************
 * Function: displayMultiples
 * Purpose: Loops through the array and prints out the integers 
 * divisible by 3.
 ***********************************************************************/
void displayMultiples(int my_array[], int size)
{
    cout << "\n";
    cout << "The following are divisible by 3:" << endl;
    for (int j = 0; j < size; j++)
    {

        if (my_array[j] % 3 == 0)
        {
            cout << my_array[j] << endl;
        }
    }
}

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{

    int array_size = getSize();

    int myList[array_size];

    getList(myList, array_size);
    displayMultiples(myList, array_size);

    return 0;
}
