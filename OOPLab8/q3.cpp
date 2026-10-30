#include<iostream>
using namespace std;
class Signal{
    public:
    virtual int green(int n){
        return 0;
    }
};
class Urban: public Signal{
    public:
    int green(int n) override{
        return min(60,10+2*n);
    }
};
class Highway: public Signal{
    public:
    int green(int n) override{
        return min(90,15+3*n);
    }
};
int main(){
    cout<<"enter :";
    int n;
    cin>>n;
    Urban u;
    Highway h;
    Signal *p=&u;
    cout<<p->green(n)<<endl;
    p=&h;
    cout<<p->green(n);
}