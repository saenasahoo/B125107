#include<iostream>
using namespace std;
class Square{
    public:
int sideLength;
float area;
int perimeter;
//input side length
 void input(){
    cout<<"Enter side length: "<<endl;
     cin>>sideLength;
 }
 //calculate area
 void calarea(){
    area=sideLength*sideLength;

 }
 // calculate perimeter
 void calperimeter(){
    perimeter=4*sideLength;
 }
 //display
 void display(){
    cout<<"side length: "<<sideLength<<endl;
    cout<<"area : "<<area<<endl;
    cout<<"perimeter: "<< perimeter<<endl;
    
 }
};
int main(){
    Square s1;//object
   s1.input();
   s1.calarea();
   s1.calperimeter();
   s1.display();
   return 0;

    

}