#include <iostream>
using namespace std;

// Update integer using reference
void update(int &x, int amount) {
    x += amount;
}

// Update float using reference
void update(float &x, float amount) {
    x += amount;
}

// Update array using pointer
void update(int *p, int n, int amount) {
    for (int i = 0; i < n; i++)
        p[i] += amount;
}

int main() {
    int x, n, amount, a[100];
    float y, f;

    cout << "Enter integer and amount: ";
    cin >> x >> amount;

    update(x, amount);
    cout << "Updated integer = " << x << endl;

    cout << "Enter float and amount: ";
    cin >> y >> f;

    update(y, f);
    cout << "Updated float = " << y << endl;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter amount: ";
    cin >> amount;

    update(a, n, amount);

    cout << "Updated array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}