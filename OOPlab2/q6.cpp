#include<iostream>
using namespace std;
class Time{
    public:
    int hour1,hour2,min1,min2;
    int resMin,resHr;
    void input(){
        //enter details for time1
        cout<<"Enter 1st hour: "<<endl;
        cin>>hour1;
        cout<<"Enter 1st Minute: "<<endl;
        cin>>min1;
        //enter details for time2
         cout<<"Enter 2nd hour: "<<endl;
        cin>>hour2;
        cout<<"Enter 2nd Minute: "<<endl;
        cin>>min2;
    }
    //add time
    void add(){
        resHr=hour1+hour2;
        resMin=min1+min2;
        if(resMin>=60){
            resHr=resHr+resMin/60;
            resMin=resMin%60;

        }

       
    }
    void display(){
        cout<<"Total Hour : "<<resHr<<endl;
        cout<<"Total Min: "<<resMin<<endl;
    }
};
int main(){
    Time t1;//object
    t1.input();
    t1.add();
    t1.display();
    return 0;
}
