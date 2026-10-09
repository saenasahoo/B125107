#include <iostream>
using namespace std;

class Bill {
    int items, amount;
public:
    Bill(int i, int a) {
        items=i; amount=a;
    }

    Bill operator+(Bill b) {
        return Bill(items+b.items, amount+b.amount);
    }

    bool operator>(Bill b) {
        return amount > b.amount;
    }

    void show() {
        cout << items << " items, Rs. " << amount << endl;
    }
};

int main() {
    Bill a(3,500), b(2,700);

    Bill c = a+b;
    c.show(); // Combined bill

    cout << (a>b) << endl; // Compare amounts
}