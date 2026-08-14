#include<iostream>

using namespace std;
int main(){
    //Dynamically allocate memory for two integers
    int *a=new int;
    int *b=new int;
    //input values
    cout<<"Enter two integers: ";
    cin>>*a>>*b;
    //Perform operations using derefernce operator
    cout<<"Sum= "<<(*a+*b)<<endl;
    cout<<"Difference= "<<(*a-*b)<<endl;
    cout<<"Product= "<<(*a * *b)<<endl;
    //Check Division by zero
    if(*b !=0)
    cout<<"Quotient= "<<(*a / *b)<<endl;
    else
    cout<<"Quotient cannot be calculated"<<endl;
    //Relaese dynamically allocated memory
    delete a;
    delete b;
    return 0;

}