#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    //Dynamically allocate an array
    int *arr=new int[n];
    //Input elements
    cout<<"Enter"<<n<<"elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Display array in reverse order
    cout<<"Array in reverse order: ";
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<" ";

    }
    //Release dynamically allocated array
    delete [] arr;
    return 0;
}