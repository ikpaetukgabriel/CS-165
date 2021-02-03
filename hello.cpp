#include <iostream>
#include <string>
using namespace std;

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

    cout << "Please enter ";
    cout << "your first name: ";
    cin >> name;

    cout << "Please enter ";
    cout << "your age: ";
    cin >> age;
    cout << endl;

    cout << "Hello " + name + ", you are ";
    cout << to_string(age) + " years old.";

    return 0;
}