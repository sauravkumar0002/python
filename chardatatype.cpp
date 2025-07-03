#include <iostream>
using namespace std;
 int main(){
   int s_p;
   int c_p;
   cout<<"enter cost price:\n";
 cin>> c_p;
   cout<<"enter selling price:\n";
 cin>> s_p;
 if(s_p> c_p){
   cout<<"profit\n";
   cout<<"profit by:"<<s_p -c_p<<"endl";
 }
 else if(s_p < c_p){
   cout<<"loss\n";
   cout<<"loss by:"<<c_p -s_p<<"\n";
 }
 else{
   cout<<"no profit no loss\n";
 }



}