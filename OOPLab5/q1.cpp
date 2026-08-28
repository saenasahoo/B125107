#include <iostream>
using namespace std;

// km to meter
void convert(int km) {
    cout << "Meters = " << km * 1000 << endl;
}

// meter to centimeter
void convert(int m, char x) {
    cout << "Centimeters = " << m * 100 << endl;
}

// float km to meter
void convert(float km) {
    cout << "Meters = " << km * 1000 << endl;
}

int main() {
    int km, m;
    float fkm;

    cout << "Enter km: ";
    cin >> km;
    convert(km);

    cout << "Enter meters: ";
    cin >> m;
    convert(m, 'm');

    cout << "Enter floating km: ";
    cin >> fkm;
    convert(fkm);

    return 0;
}