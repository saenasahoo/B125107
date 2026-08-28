#include <iostream>
using namespace std;

// Sum of integer array
int process(int a[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

// Sum of float array
float process(float a[], int n) {
    float sum = 0;

    for (int i = 0; i < n; i++)
        sum += a[i];

    return sum;
}

// Sum of first k elements
int process(int a[], int n, int k) {
    int sum = 0;

    for (int i = 0; i < k; i++)
        sum += a[i];

    return sum;
}

int main() {
    int n, k, a[100];
    float b[100];

    cout << "Enter integer array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Integer sum = " << process(a, n) << endl;

    cout << "Enter float array size: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "Float sum = " << process(b, n) << endl;

    cout << "Enter k: ";
    cin >> k;

    cout << "First k sum = " << process(a, n, k) << endl;

    return 0;
}