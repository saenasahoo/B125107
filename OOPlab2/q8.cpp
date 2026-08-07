#include<iostream>
using namespace std;
class HostelFee{
public:
string Name;
int id;
float MonthlyFee;
int numMonths;
float cost;
bool fine;
//enter student details
  
void input(){
   cout<<"Enter  name: "<<endl;
    cin>>Name;
    cout<<"Enter id: "<<endl;
    cin>>id;
    cout<<"Enter number of months: "<<endl;
    cin>>numMonths;
    cout<<"enter monthly fee:"<<endl;
    cin>>MonthlyFee;
    cout<<"is payment delayed: "<<endl;
    cin>>fine;

   
}
//calculate total hostel fees
void cal(){
    cost=numMonths*MonthlyFee;
    if(fine){
        cost=cost+500;
    }
}
void display(){
    cout<<"final payable amount: "<<cost<<endl;
}
};
int main(){
    HostelFee h1;
    h1.input();
    h1.cal();
    h1.display();
    return 0;
}