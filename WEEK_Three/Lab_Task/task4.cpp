#include<iostream>
using namespace std;
int main(){
float charge , time;
cout<<"Enter the charge (Q) in coulombs:"<<endl;
cin>>charge;
cout<<"Enter the time (t) in seconds:"<<endl;
cin>>time;
float current= charge/time;
cout<<"The current (I) is = "<<current<<" Amperes"<<endl;
return 0; 
}


