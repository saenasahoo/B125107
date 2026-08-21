#include<iostream>
using namespace std;
class EventParticipant{
    string name,status; // Private data
    int age;
    public:
    void input(){
        cin>>name>>age>> status;
    }
    friend void verifyParticipant(EventParticipant); // Friend declaration
};
void verifyParticipant(EventParticipant p){
      cout<<"Name: "<<p.name<<endl;
      // Check both eligibility conditions
      if(p.age >=18 && p.status=="active")
      cout<<"Eligible";
      else cout<<"Not Eligible";


}
int main(){
    EventParticipant p;
    cout<<"Enter name,age and status:";
    p.input();
    verifyParticipant(p); // Call friend function
}