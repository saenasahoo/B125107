#include<iostream>
using namespace std;
 class InvetoryItem{
    int id,price,qty;
    public:
    InvetoryItem(int i,int p,int q){
        id=i;
        price=p;
        qty=q;
    }
    InvetoryItem operator+(InvetoryItem x){
        if(id==x.id && price==x.price)
        return InvetoryItem(id,price,qty+x.qty);
        cout<<"Items incompatible\n";
        return
        InvetoryItem(id,price,qty);
    }
    void show(){
        cout<<id<<" "<<price<<" "<<qty<<endl;
    }
 };
 int main(){
    InvetoryItem a(1,100,5),b(1,100,3);
    InvetoryItem c=a+b;
    c.show();
 }
