#include<iostream>
using namespace std;
class MuseumManager;
class Exhibit{
    string name,status;
    int id,visitors;
    public:
    void input(){
        cin>>name>>id;
        visitors=0;
        status="Closed";
    }
    friend class MuseumManager;
};
class MuseumManager{
    public:
    void display(Exhibit e){
        cout<<e.name<<"\nID: "<<e.id<<"\nVisitors: "<<e.visitors<<endl;

    }
    void add(Exhibit &e,int n){
        e.visitors+=n;
    }
    void reset(Exhibit &e){
        e.visitors=0;
    }
    void open(Exhibit &e){
        e.status="Open";
    }
    void close(Exhibit &e){
        e.status="Open";
    }
    void check(Exhibit e){
        cout<<"status: "<<e.status;

    }
};

int main(){
    Exhibit e;
    int n;
    cout<<"Enter exhibit name and ID:";
    e.input();
    cout<<"Enter visitors to add:";
    cin>>n;
    MuseumManager m;
    m.add(e,n);
    m.open(e);
    m.display(e);
    m.check(e);
}