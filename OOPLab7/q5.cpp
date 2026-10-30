#include <iostream>
using namespace std;

class Sensor {
protected:
    int id;
public:
    Sensor(int i) : id(i) {}
};

class Temperature : virtual public Sensor {
protected:
    double t;
public:
    Temperature(int i, double x) : Sensor(i), t(x) {}
};

class Humidity : virtual public Sensor {
protected:
    double h;
public:
    Humidity(int i, double x) : Sensor(i), h(x) {}
};

class Farm : public Temperature, public Humidity {
public:
    Farm(int i, double x, double y)
        : Sensor(i), Temperature(i,x), Humidity(i,y) {}

    void show() {
        cout << id << " " << t << " " << h << endl;
        cout << (t > 35 || h > 80 ? "Warning" : "Normal");
    }
};

int main() {
    int i; double t,h;
    cin >> i >> t >> h;
    Farm f(i,t,h);
    f.show();
}