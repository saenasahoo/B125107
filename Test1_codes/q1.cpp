#include <iostream>
#include <cstring>
using namespace std;

class Locker
{
private:
    int lockerNumber;
    bool occupied;
    char *accessCode;       // Dynamic character array
    int codeSize;

public:
    // Constructor
    Locker()
    {
        lockerNumber = 0;
        occupied = false;
        accessCode = NULL;
        codeSize = 0;
    }

    // Set locker details
    void setDetails(int num, int size)
    {
        lockerNumber = num;
        codeSize = size;

        accessCode = new char[codeSize + 1];
        strcpy(accessCode, "");   
    }

    // Overloaded function 1-complete code
    void setCode(const char code[])
    {
        strcpy(accessCode, code);
        occupied = true;
    }

    // Overloaded function 2-Change code at a position
    void setCode(int position, char ch)
    {
        if (position >= 0 && position < codeSize)
        {
            accessCode[position] = ch;
        }
        else
        {
            cout << "Invalid position!" << endl;
        }
    }

    // Display locker details
    void display()
    {
        cout << "\nLocker Number: " << lockerNumber;
        cout << "\nOccupied: " << (occupied ? "Yes" : "No");
        cout << "\nAccess Code: " << accessCode << endl;
    }

    // Destructor
    ~Locker()
    {
        delete[] accessCode;
    }
};

int main()
{
    int n, size;

    cout << "Enter number of lockers: ";
    cin >> n;

    cout << "Enter access code size: ";
    cin >> size;

    
    Locker *lockers = new Locker[n];

    // Set details for each locker
    for (int i = 0; i < n; i++)
    {
        lockers[i].setDetails(i + 1, size);
    }

    // Set complete access codes
    for (int i = 0; i < n; i++)
    {
        char code[100];

        cout << "Enter code for Locker " << i + 1 << ": ";
        cin >> code;

        lockers[i].setCode(code);
    }

    // Change one character using overloaded function
    int locker, position;
    char ch;

    cout << "\nEnter locker number to change code: ";
    cin >> locker;

    cout << "Enter position to change (0-based): ";
    cin >> position;

    cout << "Enter new character: ";
    cin >> ch;

    lockers[locker - 1].setCode(position, ch);

    // Access lockers using pointer
    Locker *ptr = lockers;

    cout << "\n Locker Details \n";

    for (int i = 0; i < n; i++)
    {
        (ptr + i)->display();
    }

    // Release dynamically allocated lockers
    delete[] lockers;

    return 0;
}