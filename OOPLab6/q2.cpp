#include <iostream>
using namespace std;

class Time {
    int h, m;

public:
    Time(int a, int b) {
        h = a;
        m = b;
    }

    Time operator+(Time t) {
        int total = h*60 + m + t.h*60 + t.m;
        return Time(total/60, total%60);
    }

    void show() {
        cout << h << " hours " << m << " minutes\n";
    }
};

int main() {
    Time a(2, 45), b(1, 30);

    (a+b).show(); // 4 hours 15 minutes
}