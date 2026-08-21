#include<iostream>
using namespace std;
class Camera{
    string brand,model;
    int mp,storage;
    public:
    void input(){
        cin>>brand >>model>>mp>>storage;
    }
    friend void compareCamera(Camera,Camera);//friend declaration

};
// Compare megapixels first
// If equal, compare storage
void compareCamera(Camera a ,Camera b){
    Camera c;
    if((a.mp>b.mp)|| (a.mp==b.mp && a.storage > b.storage))
    c=a;
    
    else c=b;
     // Display better camera
    cout<<"Better Camera:"<<endl;
    cout<<c.brand<<" "<<c.model<<endl;
    cout<<c.mp<<" MP\n" << c.storage<<"GB";


}
int main(){
    Camera a,b;
    cout<<"Enter brand, model, MP , storage for camera 1:";
    a.input();
    cout<<"Enter brand ,model, MP , storage for camera 2: ";
    b.input();
    compareCamera(a,b);// Compare both cameras
}
