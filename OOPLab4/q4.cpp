#include<iostream>
using namespace std;
class Meter{
    int number,units;// Private data
    string name;
    public:
    void input(){
        cin>> number>>name>>units;
    }
    friend void checkUsage(Meter); // Friend declaration
};
void checkUsage(Meter m){
    // Display consumer details
    cout<<"Meter: "<<m.number<< endl;
    cout<<"Consumer: "<<m.name<<endl;
    // Classify electricity usage
    if(m.units<100){
        cout<<"Low Usage";
    }
    else if(m.units<=300)cout<<"Moderate Usage";
    else cout<<"High Usage";
}
int main(){
    Meter m;
    cout<<"Enter meter number,name and units: ";
    m.input();
    checkUsage(m);  // Call friend function
}