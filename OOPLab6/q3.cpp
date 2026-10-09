#include<iostream>
#include<string>
using namespace std;

class Book{
    string title;
    float price;
    public:
    Book(string t, float p):
    title(t),price(p){}
    bool operator<(Book b){
        if(price==b.price)
        return title<b.title;
        return price<b.price;
    }
};
int main(){
    Book a("Apple",200),b("Book",200);
    cout<<(a<b);
}