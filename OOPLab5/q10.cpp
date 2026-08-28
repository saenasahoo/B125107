#include <iostream>
using namespace std;

// Average of two integers
float evaluate(int a, int b) {
    return (a + b) / 2.0;
}

// Average of three integers
float evaluate(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

// Average of two floats
float evaluate(float a, float b) {
    return (a + b) / 2;
}

// Average of array using pointer
float evaluate(int *p, int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += p[i];

    return (float)sum / n;
}

int main() {
    int a, b, c, n, arr[100];
    float x, y;

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Average = " << evaluate(a, b) << endl;

    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    cout << "Average = " << evaluate(a, b, c) << endl;

    cout << "Enter two floats: ";
    cin >> x >> y;
    cout << "Average = " << evaluate(x, y) << endl;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Average = " << evaluate(arr, n) << endl;

    return 0;
}