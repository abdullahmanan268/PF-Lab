#include<iostream>
using namespace std;
int main(){
float volt , current;
cout<<"Enter Voltage (in volts):"<<endl;
cin>>volt;
cout<<"Enter Current (in amperes):"<<endl;
cin>>current;
float power = volt* current;
cout<<"The power is "<<power<<" watts"<<endl;
return 0;
}
