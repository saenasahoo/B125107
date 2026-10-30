#include<iostream>
using namespace std;
class Ticket{
    protected:
    string name;
    double d;
    public:
    Ticket(string n,double x): name(n),d(x){}

};
class RailwayTicket : public Ticket {
    double rate;
    public:
    RailwayTicket(string n,double d,double r):
    Ticket(n,d),rate(r){}
    void show(){
        double fare=d*rate;
        if(d>300) fare*=0.9;
        cout<<name<<"Fare: Rs."<< fare;

    }
};
int main(){
    string n;
    double d,r;
    getline(cin,n);
    cin>>d>>r;
    RailwayTicket t(n,d,r);
    t.show();
    return 0;
}