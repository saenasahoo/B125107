#include<iostream>
using namespace std;
class Scholarship{
    public:
    virtual double award(double m,double i)
    { return 0;}
};
class Merit:public Scholarship{
    public:
    double award(double m,double i)
    override{
        if(m>=90) return 20000;
        if(m>=80) return 10000;
        return 0;
    }
};
class Need: public Scholarship{
    public:
double award(double m,double i)
override{
    return (i<200000 && m>=70)?25000:0;
}
};
int main(){
    double m,i;
    cin>>m>>i;
    Merit a;
    Need b;
    Scholarship *p=&a;
    cout<< p->award(m,i)<<endl;
    p=&b;
    cout<<p->award(m,i); 
}