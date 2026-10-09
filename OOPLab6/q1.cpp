#include<iostream>
#include<numeric>
using namespace std;
// function to calculate gcd
int gcd(int a,int b){
    while(b!=0){
        int r=a%b
;
a=b;
b=r;    }
return a;
}
class Fraction{
    int n,d;
    void simplify(){
        int g=gcd(n,d);
        n/=g;
        d/=g;
        if(d<0)n= -n,d=-d;
    }
    public:
    Fraction(int a,int b): n(a),d(b){ simplify();}
    Fraction operator+(Fraction f){
        return Fraction(n*f.d +f.n*d,d*f.d);
    }
    Fraction operator-(Fraction f){
        return Fraction(n*f.d-f.n*d,d*f.d);
    }
    void show(){
        cout << n<< "/"<<d<<endl;
    }
};
int main(){
    Fraction a(1,2),b(1,3);
    (a+b).show();//addition
    (a-b).show();// subtraction
}
