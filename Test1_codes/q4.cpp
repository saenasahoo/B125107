#include <iostream>
using namespace std;

class LabSupervisor;

class Instrument
{
    int id;
    string name;
    int accessLevel;

public:
    void setDetails(int i, string n, int a)
    {
        id = i;
        name = n;
        accessLevel = a;
    }

    void display()
    {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
        cout << "\nAccess Level: " << accessLevel << endl;
    }

    friend class LabSupervisor;
};

class LabSupervisor
{
public:
    void check(Instrument &i)
    {
        cout << "\nCurrent Access Level: "
             << i.accessLevel;
    }

    void change(Instrument &i, int level)
    {
        i.accessLevel = level;
    }
};

int main()
{
    Instrument *i = new Instrument;

    int id, level;
    string name;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter name: ";
    cin >> name;

    cout << "Enter access level: ";
    cin >> level;

    i->setDetails(id, name, level);

    LabSupervisor s;

    s.check(*i);

    cout << "\nEnter new access level: ";
    cin >> level;

    s.change(*i, level);

    i->display();

    delete i;

    return 0;
}