#include<iostream>
using namespace std;
 int main(){
    int a,b,c;
    cout<<"enter the sides of triangle:\n";
    cin>>a>>b>>c;
    if(a+b>c && a+c>b && b+c>a){
        cout<<"triangle is possible\n";
        
}
    else{
        cout<<"triangle is not possible\n";
    }
 }