#include <iostream>
using namespace std;

class MobileRecharge {
private:
//customer details kept hidden
    string mobileNumber, customerName;
    float balance;

public:
//input customer details
    void input() {
        cout << "Enter Mobile Number: "<<endl;
        cin >> mobileNumber;

       

        cout << "Enter Customer Name: "<<endl;
        cin>>customerName;

        cout << "Enter Current Balance: "<<endl;
        cin >> balance;
    }
//amount added after recharge
    void recharge() {
        float amount;
        cout << "Enter Recharge Amount: "<<endl;
        cin >> amount;
        balance += amount;
    }
//deduct cost for recharge plan
    void deductPlan() {
        float plan;
        cout << "Enter Recharge Plan Cost: "<<endl;
        cin >> plan;

        if (plan <= balance) {
            balance -= plan;
            cout << "Recharge Successful!"<<endl;
        } else {
            cout << "Insufficient Balance!"<<endl;
        }
    }

    void display() {
        cout << "Customer Details "<<endl;
        cout << "Mobile Number : " << mobileNumber << endl;
        cout << "Customer Name : " << customerName << endl;
        cout << "Updated Balance : " << balance << endl;
    }
};

int main() {
    MobileRecharge m;
    m.input();
    m.recharge();
    m.deductPlan();
    m.display();
    return 0;
}