#include<iostream>
using namespace std;
class AttendanceManager;
class Classroom{
    string name,status;
    int total,present;
    public:
    void input(){
        cin>>name>>total;
        present=0;
        status="Pending";

    }
    friend class AttendanceManager;

};
 
class AttendanceManager{
    public:
    void display(Classroom c){
        cout<<"Class: "<<c.name<<"\nTotal"<< c.total<<"\nPresent:"<<c.present<<endl;
    }
    void update(Classroom &c,int p){
        c.present=p;
    }
    void complete(Classroom &c){
        c.status="Completed";
    }
    void check(Classroom c){
        cout<<"Attendance: "<<c.status<<endl;
    }
    void absent(Classroom c){
        cout<<"absent "<<c.total-c.present;
    }
};
int main(){
    Classroom c;
    int p;
    cout<<"Enter class name and total students";
    c.input();
    cout<<"Enter present students";
    cin>>p;
    AttendanceManager m;
    m.update(c,p);
    m.display(c);
    m.complete(c);
    m.check(c);
    m.absent(c);
}