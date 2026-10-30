#include<iostream>
using namespace std;
class Image{
    protected:
    int w,h;
    public:
    Image(int a,int b): w(a),h(b){}
};
class CompressedImage:public Image{
    protected:
    double c;
    public:
    CompressedImage(int a,int b,double x): Image(a,b),c(x){}
};
class EncryptedImage:public CompressedImage{
    string algo;
    public:
    EncryptedImage(int a,int b,double c,string s):
    CompressedImage(a,b,c),algo(s){}
    void show(){
        cout<<"Pixels: "<<w*h<<"|nCompressed: "<< w*h*c/100<<"\nAlgorithm: "<<algo;

    }
};
int main(){
    int w,h;
    double c;
    string s;
    cin>>w>>h>>c>>s;
    EncryptedImage i(w,h,c,s);
    i.show();
}