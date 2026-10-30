#include<iostream>
using namespace std;
class Backup{
    public:
    virtual double storage(double s)
    {return 0;}
};
class Full: public Backup{
    public:
    double storage(double s) override
    { return s;}
};
class Incremental: public Backup{
    public:
    double storage(double s)override
    { return s*0.25+50;}
};
int main(){
    double s;
    cin>>s;
    Full f;
    Incremental i;
    Backup *p=&f;
    cout<<p->storage(s)<<"MB\n";
  p=&i;
  cout<<p->storage(s)<<"MB";
}