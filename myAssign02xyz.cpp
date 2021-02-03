#include <iostream>
#include <fstream>
using namespace std;

struct Access_record
{
    string userName;
    string fileName;
    long timestamp;
};

string file_request()
{
    string fileName;
    cout << "Enter the access record file: ";
    cin >> fileName;
    return fileName;
};

void read_file(Access_record array[])
{
    string fileAccess = file_request();
    ifstream readFile;
    readFile.open(fileAccess);
    if (readFile.fail())
    {
        cerr << "Error reading file. " << fileAccess << " does not exist\n";
        return;
    }
    int i = 0;
    while (!readFile.eof())
    {
        readFile >> array[i].fileName >> array[i].userName >> array[i].timestamp;

        cout << array[i].timestamp << array[i].fileName << array[i].userName;
        i++;
    }
};

void time()
{
    int startTime;
    int endTime;
    cout << "Enter the start time: ";
    cin >> startTime;
    cout << "Enter the end time: ";
    cin >> endTime;
}

void displayRecord(Access_record array[])
{
    for (int i = 0; i < 500; i++)
    {
        cout << array[i].timestamp << array[i].fileName << array[i].userName << endl;
    };
};

int main()
{
    Access_record record[500];
    read_file(record);
    // displayRecord(record);
    return 0;
}