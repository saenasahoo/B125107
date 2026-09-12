#include <iostream>
using namespace std;

class QueueDisplay
{
    int size;
    int *id;

public:
    QueueDisplay()
    {
        id = NULL;
    }

    void setSize(int s)
    {
        size = s;
        id = new int[size];
    }

    void insert()
    {
        cout << "Enter customer IDs:\n";

        for (int i = 0; i < size; i++)
            cin >> id[i];
    }

    void display()
    {
        for (int i = 0; i < size; i++)
            cout << id[i] << " ";

        cout << endl;
    }

    friend void exchange(QueueDisplay &q1, QueueDisplay &q2);

    ~QueueDisplay()
    {
        delete[] id;
    }
};

void exchange(QueueDisplay &q1, QueueDisplay &q2)
{
    // Exchange sizes
    int temp = q1.size;
    q1.size = q2.size;
    q2.size = temp;

    // Exchange arrays
    int *p = q1.id;
    q1.id = q2.id;
    q2.id = p;
}

int main()
{
    QueueDisplay *q = new QueueDisplay[2];

    int n;

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter size of queue " << i + 1 << ": ";
        cin >> n;

        q[i].setSize(n);
        q[i].insert();
    }

    cout << "\nBefore exchange:\n";
    q[0].display();
    q[1].display();

    exchange(q[0], q[1]);

    cout << "\nAfter exchange:\n";
    q[0].display();
    q[1].display();

    delete[] q;

    return 0;
}