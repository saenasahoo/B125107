#include<iostream>
using namespace std;
class Candidate {
    protected:
    int id;
    double a;
    public:
    Candidate(int i,double x): id(i),a(x){}
};
class Regular: public Candidate{
    public:
    using Candidate::Candidate;
    void check(){
        cout<<(a>=75? "Eligible": "Not Eligible");
    }
};
class Reappear:public Candidate{
    public:
    using Candidate::Candidate;
    void check(){
        cout<<(a>=60?"Eligible":"Not Eligible");
    }
};
int main(){
    int id,ch;
    double a;
    cin>>id>>a>>ch;
    if(ch==1){
        Regular r(id,a);
        r.check();
    }else{
        Reappear r(id,a);
        r.check();
    }
}