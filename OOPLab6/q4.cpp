#include<iostream>
using namespace std;
class AccountBalance{
    int balance;
    public:
    AccountBalance(int b):balance(b){}
    AccountBalance operator-(){
        return AccountBalance(-balance);
    }
    void show(){
        cout<< balance<<endl;
    }
};
int main(){
    AccountBalance a(500);
    AccountBalance b=-a;
    a.show(); //original balance
    b.show(); // Negative balance;
}