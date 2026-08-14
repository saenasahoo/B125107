#include<iostream>
using namespace std;
int main(){
    int n,search,position=-1;
    cout<<"Enter size of array: ";
    cin>>n;
    //Dynamically allocate an array
    int *arr=new int[n];
    //Input elements
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Input element to search
    cout<<"enter element to search:";
    cin>>search;
    //Search for the element
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            position=i;
            break;
        }
    }
    //Display result
    if(position !=-1)
    cout<<"Element fount at position"<<position+1<<endl;
    else
    cout<<"Element not found"<<endl;
    //Release memory
    delete [] arr;
    return 0;
}