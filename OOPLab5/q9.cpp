#include <iostream>
using namespace std;

// Display integer
void inspect(int x) {
    cout << "Value = " << x << endl;
}

// Display value using pointer
void inspect(int *p) {
    cout << "Pointer value = " << *p << endl;
}

// Display array using pointer
void inspect(int *p, int n) {
    cout << "Array: ";

    for (int i = 0; i < n; i++)
        cout << *p++ << " ";
}

int main() {
    int x, n, a[100];

    cout << "Enter integer: ";
    cin >> x;
    inspect(x);

    cout << "Enter integer for pointer: ";
    cin >> x;
    inspect(&x);

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    inspect(a, n);

    return 0;
}