#include<iostream>
using namespace std;

class Weather{
    string city,condition;//private data
    float temp;
    public:
    //take input
    void input(){
        cin>>city>>temp>>condition;
    }
    friend void generateReport(Weather);//declare friend function
};

void generateReport(Weather w){
    //friend function can access private members
    cout<<"City: "<<w.city<<endl;
    cout<<"Temperature: "<<w.temp<<" C\n";
    cout<<"Condition: "<< w.condition<<"\n";
    if(w.temp>35)cout<<"Very Hot"<<endl;
    else if(w.temp>20 && w.temp<35)cout<<"Pleasant"<<endl;
    else cout<<"Cool";
}
int main(){
    Weather w;
    cout<<"Enter city,temperature and condition: ";
    w.input();
    generateReport(w);//friend function
}