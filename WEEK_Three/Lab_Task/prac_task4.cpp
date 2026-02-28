#include<iostream>
using namespace std;
int main(){
float imposter , player;
cout<<"Enter imposters:"<<endl;
cin>>imposter;
cout<<"Enter players:"<<endl;
cin>>player;
float formula= 100 * (imposter/player);
cout<<"Chance = "<<formula<<"%"<<endl;
return 0;
}

