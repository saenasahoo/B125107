#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];
public:
    Matrix(int x, int y, int z, int w) {
        a[0][0]=x; a[0][1]=y;
        a[1][0]=z; a[1][1]=w;
    }

    Matrix operator+(Matrix m) {
        Matrix r(0,0,0,0);

        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                r.a[i][j]=a[i][j]+m.a[i][j];

        return r;
    }

    void show() {
        for(int i=0;i<2;i++)
            cout << a[i][0] << " " << a[i][1] << endl;
    }
};

int main() {
    Matrix a(1,2,3,4), b(5,6,7,8);

    a.show();
    b.show();
    (a+b).show();
}