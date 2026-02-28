#include<iostream>
using namespace std;
int main(){
  int mins,fps;
  cout<<"Number of minutes:"<<endl;
  cin>>mins;
  cout<<"Frames per second:"<<endl;
  cin>>fps;
  int total=60*fps*mins;
  cout<<"Total number of frames :"<<total<<endl;
  return 0;
  }
  
