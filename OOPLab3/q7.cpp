#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of string: ";
    cin>>n;
    //Dynamically allocate character array
    char *str=new char[n+1];
    cout<<"Enter a string:";
    cin>>str;
    int vowels=0,consonants=0;
    int digits=0,spaces=0;
    //Examine each character
    for(int i=0;str[i]!='\0';i++){
        char ch=str[i];
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
            vowels++;
        }
        else if(ch>='0' && ch<='9'){
            digits++;
        }
        else if(ch==' '){
            spaces++;
        }
        else{
            consonants++;
        }
    }
    cout<<"Vowels= "<<vowels<<endl;
    cout<<"Consonants= "<<consonants<<endl;
    cout<<"Digits= "<<digits<<endl;
    cout<<"spaces = "<< spaces<<endl;
    //Relaese memory
    delete [] str;
    return 0;
}