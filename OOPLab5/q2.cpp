#include <iostream>
using namespace std;

// Area of square
int area(int s) {
    return s * s;
}

// Area of rectangle
int area(int l, int b) {
    return l * b;
}

// Area of circle
double area(double r) {
    return 3.14 * r * r;
}

int main() {
    int s, l, b;
    double r;

    cout << "Enter side: ";
    cin >> s;
    cout << "Square area = " << area(s) << endl;

    cout << "Enter length and breadth: ";
    cin >> l >> b;
    cout << "Rectangle area = " << area(l, b) << endl;

    cout << "Enter radius: ";
    cin >> r;
    cout << "Circle area = " << area(r) << endl;

    return 0;
}