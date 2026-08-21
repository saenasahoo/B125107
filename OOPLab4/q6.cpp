#include<iostream>
using namespace std;
class PrinterManager; // Forward declaration
class Printer{
    string name,power; // Private data
    int pages,ink;
    public:
    void input(){
        cin>>name>>pages>>ink>>power;
        power = "OFF";   // Initial power status

    }
    friend class PrinterManager; // Entire class becomes friend
};

class PrinterManager{
    public:
    void display(Printer p){
        cout<<p.name<<"\npages: "<<p.pages<<"\nink: "<<p.ink<<endl;
    }
    void on(Printer &p){
        p.power="ON"; // Turn printer ON
    }
    void off(Printer &p){
        p.power="OFF"; // Turn printer OFF

    }
    void ink(Printer p){
        cout<<"Ink:"<<p.ink<<endl; // Check ink
    }
    void reset(Printer &p){
        p.pages=0;  // Reset page count
    }
};
int main(){
    Printer p;
    cout<<"Enter printer name,pages , ink: ";
    p.input();
    PrinterManager m;
    m.display(p); 
    m.display(p); // Display information
    m.on(p);// Turn ON
    m.ink(p);// Check ink
    m.reset(p);// Reset pages
    return 0;
}