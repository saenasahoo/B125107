#include<iostream>
#include<string>
using namespace std;

class Product{
    private:
    int productID;
    string productName;
    float price;
    int quantity;
    public:
    //Function to accept product details
    void input(){
      
        cout<<"Enter product Id:";
        cin>>productID;
        cin.ignore();
        cout<<"Enter Product name:";
        cin>>productName;
        cout<<"Enter Price:";
        cin>>price;
         cout<<"Enter Quantity";
         cin>>quantity;
    }
    //Function to calculate and display product details
    void display(){
        float cost=price+quantity;
        cout<<"Product ID: "<< productID<<endl;
        cout<<"Product Name: "<<productName<<endl;
        cout<<"Price"<<price<<endl;
        cout<<"product cost: "<<cost<<endl;

    }
    //funtion to get cost
    float getCost(){
        return price*quantity;
    }
};
int main(){
    int n;
     float total=0;
     cout<<"Enter Number of products";
     cin>>n;
     //Dynamically allocate array of Product objects
     Product *products=new Product[n];
     //Input details of all products
     for(int i=0;i<n;i++){
        cout<<"Enter details of product"<<i+1<<":"<<endl;
        products[i].input();
     }
     // Display details and calculate total value
     cout<<"Product Details"<<endl;
     for(int i=0;i<n;i++){
        products[i].display();
        total+=products[i].getCost();
     }
     cout<<"overall Invetory value= "<<total<<endl;
     //Relaese dynamically allocated array
     delete [] products;
     return 0;
}