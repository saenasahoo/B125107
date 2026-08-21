#include <iostream>
using namespace std;

class UserAccount {
    string username, status;//private data
    int attempts;
public:
    void input() {
        cin >> username >> attempts >> status;
    }
    friend void checkAccount(UserAccount);//friend declaration
};

void checkAccount(UserAccount u) {
    cout << "Username: " << u.username << "\n";
    cout << "Attempts: " << u.attempts << "\n";
//check account status
    if(u.attempts >= 3)
        cout << "Account Locked";
    else
        cout << "Account Active";
}

int main() {
    UserAccount u;
    cout << "Enter username, attempts and status: ";
    u.input();
    checkAccount(u);
}