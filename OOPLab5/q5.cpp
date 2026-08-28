#include <iostream>
using namespace std;

// Swap integers using reference
void swapData(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}

// Swap floats using reference
void swapData(float &a, float &b) {
    float t = a;
    a = b;
    b = t;
}

// Swap integers using pointers
void swapData(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int a, b;
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    swapData(a, b);
    cout << "After swap: " << a << " " << b << endl;

    cout << "Enter two floats: ";
    cin >> x >> y;
    swapData(x, y);
    cout << "After swap: " << x << " " << y << endl;

    cout << "Enter two integers for pointer swap: ";
    cin >> a >> b;
    swapData(&a, &b);
    cout << "After swap: " << a << " " << b << endl;

    return 0;
}