#include<iostream>
using namespace std;
int main(){
  float imposter, player;
  cout<<"Enter imposter count:"<<endl;
  cin>>imposter;
  cout<<"enter player count:"<<endl;
  cin>>player;
  int chance= 100*(imposter/player);
  cout<<"Chance of being an imposter : "<<chance<<"%"<<endl;
  return 0;
  } 
