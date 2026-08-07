#include<iostream>
using namespace std;
class Temperature{
  public:
  float tempC;
  float tempF;
//input temperature
  void input(){
    cout<<"Enter Temperature in Celsius: "<<endl;
    cin>> tempC;
  }
  //convert celsius to fahrenheit
  void convert(){
    tempF=9*tempC/5+32;
  }
  //display
  void display(){
    cout<<"Temparature in Celsius: "<<tempC<<endl;
    cout<<"Temparature in Fahrenheit: "<<tempF<<endl;
  }
};
int main(){
    Temperature t1;//object
    t1.input();
    t1.convert();
    t1.display();
    return 0;
}