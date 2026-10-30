#include <iostream>
using namespace std;

class Plan {
public:
    virtual double bill(double u) { return 0; }
};

class Residential : public Plan {
public:
    double bill(double u) override {
        return u <= 100 ? u*4 : 400+(u-100)*6;
    }
};

class Commercial : public Plan {
public:
    double bill(double u) override { return u*7; }
};

int main() {
    cout<<"enter: ";
    double u; cin >> u;
    Residential r; Commercial c;
    Plan *p=&r;
    cout << p->bill(u) << endl;
    p=&c;
    cout << p->bill(u);
}