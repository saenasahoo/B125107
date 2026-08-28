#include <iostream>
#include <cmath>
using namespace std;

// Find integer closer to zero
int nearValue(int a, int b) {
    return abs(a) < abs(b) ? a : b;
}

// Find float closer to zero
float nearValue(float a, float b) {
    return abs(a) < abs(b) ? a : b;
}

// Find array element closer to zero
int nearValue(int a[], int n) {
    int x = a[0];

    for (int i = 1; i < n; i++)
        if (abs(a[i]) < abs(x))
            x = a[i];

    return x;
}

int main() {
    int a, b, n, arr[100];
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Nearest = " << nearValue(a, b) << endl;

    cout << "Enter two floats: ";
    cin >> x >> y;
    cout << "Nearest = " << nearValue(x, y) << endl;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Nearest = " << nearValue(arr, n) << endl;

    return 0;
}