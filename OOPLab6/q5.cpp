#include <iostream>
using namespace std;

class Score {
    int s;
public:
    Score(int x) { s = x; }

    Score operator++() { // Prefix
        s++;
        return *this;
    }

    Score operator++(int) { // Postfix
        Score temp(s);
        s++;
        return temp;
    }

    void show() { cout << s << endl; }
};

int main() {
    Score a(5), b(5);
    Score x = ++a;
    Score y = b++;

    x.show(); // 6
    y.show(); // 5
}