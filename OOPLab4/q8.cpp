#include <iostream>
using namespace std;

class ServiceManager;

class VehicleService {
    string number, owner, status;
    int km;
public:
    void input() {
        cin >> number >> owner >> km;
        status = "Pending";
    }
    friend class ServiceManager;
};

class ServiceManager {
public:
    void display(VehicleService v) {
        cout << "Vehicle: " << v.number
             << "\nOwner: " << v.owner
             << "\nKM: " << v.km
             << "\nStatus: " << v.status << "\n";
    }

    void complete(VehicleService &v) {
        v.status = "Completed";
    }

    void update(VehicleService &v, int k) {
        v.km = k;
    }

    void check(VehicleService v) {
        if(v.km >= 10000)
            cout << "Service Required";
        else
            cout << "Service Not Required";
    }
};

int main() {
    VehicleService v;
    cout << "Enter vehicle number, owner and KM: ";
    v.input();

    ServiceManager m;
    m.display(v);
    m.check(v);
}