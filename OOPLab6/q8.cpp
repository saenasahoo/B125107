#include <iostream>
using namespace std;

class Temperature {
    int c;
public:
    Temperature(int x) { c=x; }

    bool operator>(Temperature t) {
        return c > t.c;
    }

    bool operator<(Temperature t) {
        return c < t.c;
    }

    Temperature operator-() {
        return Temperature(-c);
    }

    void show() { cout << c << " C" << endl; }
};

int main() {
    Temperature a(30), b(20);

    cout << (a>b) << endl; // 1
    cout << (a<b) << endl; // 0
    Temperature c = -a;
    c.show(); // -30 C
}