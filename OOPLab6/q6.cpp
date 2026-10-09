#include<iostream>
using namespace std;
class Date{
int d,m,y;
public:
Date(int a,int b,int c){
d=a;m=b;y=c;

}
bool operator==(Date x){
    return d==x.d
&& m==x.m && y==x.y;}
bool operator!=(Date x){
    return d!=x.d || m!=x.m
|| y!=x.y;}
};
int main(){
    Date a(9,10,2026),b(9,10,2026);
    cout<<(a==b)<<endl; //1=equal
    cout<<(a!=b)<< endl;// 0=not equal
}