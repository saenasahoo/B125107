#include <iostream>
using namespace std;

class WalletManager;

class DigitalWallet {
    string user, status;
    double balance;
public:
    void input() {
        cin >> user >> balance;
        status = "Active";
    }
    friend class WalletManager;
};

class WalletManager {
public:
    void display(DigitalWallet w) {
        cout << "User: " << w.user
             << "\nBalance: " << w.balance << "\n";
    }

    void add(DigitalWallet &w, double x) {
        w.balance += x;
    }

    void deduct(DigitalWallet &w, double x) {
        if(w.balance >= x) w.balance -= x;
        else cout << "Insufficient Balance\n";
    }

    void disable(DigitalWallet &w) {
        w.status = "Disabled";
    }

    void check(DigitalWallet w) {
        cout << "Status: " << w.status;
    }
};

int main() {
    DigitalWallet w;
    double x;

    cout << "Enter username and balance: ";
    w.input();

    WalletManager m;
    m.display(w);

    cout << "Enter amount to add: ";
    cin >> x;
    m.add(w,x);

    cout << "Enter amount to deduct: ";
    cin >> x;
    m.deduct(w,x);

    m.check(w);
}