#include <iostream>
#include <string>
using namespace std;

struct Scripture
{
    string bookName;
    int chapter;
    int verse;
};

void displayScripture(const Scripture &x)
{
    cout << x.bookName;
    cout << " ";
    cout << x.chapter;
    cout << ":";
    cout << x.verse;
}

Scripture promptScripture(Scripture &x)
{
    cout << "Enter book name: ";
    cin >> x.bookName;
    cout << "Enter chapter: ";
    cin >> x.chapter;
    cout << "Enter verse: ";
    cin >> x.verse;

    return (x);
}

int main()
{
    Scripture scripture;

    scripture.bookName = "Alma";
    scripture.chapter = 31;
    scripture.verse = 5;

    displayScripture(scripture);
    cout << endl;

    Scripture scripture1;
    promptScripture(scripture1);
    displayScripture(scripture1);

    cout << endl;

    struct Scripture myScriptures[3];

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        promptScripture(myScriptures[i]);
    }

    for (int j = 0; j < 3; j++)
    {
        displayScripture(myScriptures[j]);
        printf("\n");
    }

    printf("\n");

    return 0;
}