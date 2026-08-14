#include<iostream>
using  namespace std;
int main(){
 int n;
  int even=0;
  int odd=0;
 
    cout<<"Enter size of array: ";
    cin>>n;
    //Dynamically allocate an array
    int *arr=new int[n];
    //Input elements
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //count even and odd numbers
    for(int i=0;i<n;i++){
        if(arr[i]%2==0)
        even++;
        else
        odd++;
    }
    cout<<"Number of even elements= "<<even<<endl;
    cout<<"Number of odd elements= "<<odd<<endl;
    //relaease memory
    delete [] arr;
    return 0;
}