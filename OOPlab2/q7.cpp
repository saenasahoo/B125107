#include<iostream>
using namespace std;
class MovieTicket{
public:
string movieName;
float ticketPrice;
int numTickets;
float cost;
  // enter booking details
void input(){
   cout<<"Enter movie name: "<<endl;
    cin>>movieName;
    cout<<"Enter ticket price:"<<endl;
    cin>>ticketPrice;
    cout<<"Enter number of tickets: "<<endl;
    cin>>numTickets;
   
}
//calculate total ticket cost
void cal(){
  cost=numTickets*ticketPrice;
}

void display(){
    cout<<"movie name: "<<movieName<<endl;
    cout<<"ticket price: "<<ticketPrice<<endl;
    cout<<" number of tickets: "<<numTickets<<endl;
    cout<<"Total cost: "<<cost<<endl;
}
};
int main(){
    MovieTicket m1;//object
    m1.input();
    m1.cal();
    m1.display();
    return 0;

}