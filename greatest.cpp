#include<iostream>
using namespace std;
 int main(){
    int a,b,c;
    cout<<"enter 1st numbers:\n";
    cin>>a;
    cout<<"enter 2nd numbers:\n";
    cin>>b;
    cout<<"enter 3rd numbers:\n";  
    cin>>c;
    if(a>b && a>c){
        cout<<"greatest number is:"<<a<<"\n";
    }
    else if(b>a && b>c){
        cout<<"greatest number is:"<<b<<"\n";
    }
    else if(c>a && c>b){
        cout<<"greatest number is:"<<c<<"\n";
    }
    else{
        cout<<"all numbers are equal\n";
    }
 }