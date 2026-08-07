#include<iostream>
using namespace std;
class HotelRoom{
    public:
  int roomNumber;
  string guestName;
  int stayDays;
  float costPerDay;
  float rent;
  // enter booking details
  void input(){
    cout<<"Enter room number: "<<endl;
    cin>>roomNumber;
    cout<<"Enter guest name:"<<endl;
    cin>>guestName;
    cout<<"Enter number of days stayed: "<<endl;
    cin>>stayDays;
    cout<<"Enter Cost Per day: "<<endl;
    cin>>costPerDay;
  }
  //calculate total rent
  void calRent(){
    rent=stayDays*costPerDay;
  }
  //display
  void display(){
    cout<<"room number: "<<roomNumber<<endl;
    cout<<"guest name: "<<guestName<<endl;
    cout<<"number of days stayed: "<<stayDays<<endl;
    cout<<"Cost Per day: "<<costPerDay<<endl;
    cout<<"Rent: "<<rent<<endl;
  }
  
};
int main(){
    HotelRoom h1;//object
    h1.input();
    h1.calRent();
    h1.display();
    return 0;
}