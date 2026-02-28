#include<iostream>
using namespace std;
int main(){
  int init_vel,acceleration,time,final_vel;
  cout<<"Enter intial velocity(m/s):"<<endl;
  cin>>init_vel;
  cout<<"Enter acceleration(m/s^s):"<<endl;
  cin>>acceleration;
  cout<<"Enter time (s):"<<endl;
  cin>>time;
  final_vel=(acceleration *time) +init_vel;
  cout<<"Final Velocity: "<<final_vel<<endl;
  return 0;
  } 
  
  

