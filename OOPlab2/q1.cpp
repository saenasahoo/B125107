#include<iostream>
using namespace std;
class Car{
    public:
int carNumber;
string brandName;
int modelYear;
//take user details
void user(){
    cout<<"Enter Car Number"<<endl;
    cin>>carNumber;
     cout<<"Enter brand name"<<endl;
     cin>>brandName;
     cout<<"Enter Model Year"<<endl;
     cin>>modelYear;

}
//display
void display(){
    cout<<"Car Number: "<<carNumber<<endl;
    cout<<"brand name: "<<brandName<<endl;
    cout<<"Model Year: "<<modelYear<<endl;
}
};
int main(){
    Car c1;//object
    c1.user();
    c1.display();
    return 0;
}