#include<iostream>
using namespace std;
 int main(){
    int a,b,c;
    cout<<"enter three numbers:\n";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"largest number is:"<<a<<"\n";
        }
        else{
            cout<<"largest number is:"<<c<<"\n";
        }
    }
    else{
        if(b>c){
            cout<<"largest number is:"<<b<<"\n";
        }
        else{
            cout<<"largest number is:"<<c<<"\n";
        }
    }


 }