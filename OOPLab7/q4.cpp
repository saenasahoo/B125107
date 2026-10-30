#include<iostream>
using namespace std;
class Library{
    protected:
    int books;
    public:
    Library(int b):books(b){}
};
class Lab{
    protected:
    int pending;
    public:
    Lab(int p):pending(p){}
};
class Student: public Library,public Lab{
    public:
    Student(int b,int p): Library(b),Lab(p){}
    void show(){
        cout<<(books<=5&& pending ==0 ? "Access Granted": "Access Denied");
    }
};
int main(){
    int b,p;
    cin>>b>>p;
    Student s(b,p);
    s.show();
}