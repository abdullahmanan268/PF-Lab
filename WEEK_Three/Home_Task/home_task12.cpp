#include<iostream>
using namespace std;
int main(){
   int area, width,heigth;
   cout<<"Number of square meters you can paint:"<<endl;
   cin>>area;
   cout<<"Width of single wall (in meters):"<<endl;
   cin>>width;
   cout<<"Heigth of single wall ( in meters):"<<endl;
   cin>>heigth;
   int wall= area/(width * heigth);
   cout<<"Number of walls you can paint : "<<wall<<endl;
   return 0;
   }
   
   
