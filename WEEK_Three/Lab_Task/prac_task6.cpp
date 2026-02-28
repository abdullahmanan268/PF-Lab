#include<iostream>
using namespace std;
int main(){
int area , width , height ,wall;
cout<<"Enter paint area:"<<endl;
cin>>area;
cout<<"Enter width:"<<endl;
cin>>width;
cout<<"Enter height:"<<endl;
cin>>height;
wall= area/(width * height);
cout<<"Walls painted: "<<wall<<endl;
return 0;
}

