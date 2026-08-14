#include<iostream>
#include<string>
using namespace std;
class Book{
    private:
    int bookId;
    string title;
    string author;
    float price;
    public:
    //Function to accept book details
    void input(){
        cout<<"Enter Book ID: ";
        cin>>bookId;
        cin.ignore();
        cout<<"Enter Book Title: ";
        getline(cin,title);
        cout<<"Enter Author: ";
        getline(cin,author);
        cout<<"Enter Price: ";
        cin>>price;
    }
    //Function to display book details
    void display(){
        cout<<"Book Details"<<endl;
        cout<<"Book ID: "<<bookId<<endl;
        cout<<"Book Title: "<< title << endl;
        cout<<"Author: "<<author<<endl;
        cout<<"Price: "<<price<<endl;

    }
    
};
int main(){
    //dynamically create a Book object
    Book *b=new Book;
    //Access memebers using -> operator
    b-> input();
    b->display();
    //Release dynamically allocated object
    delete b;
    return 0;
}