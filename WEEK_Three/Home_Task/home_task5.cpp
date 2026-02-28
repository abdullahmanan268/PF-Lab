#include<iostream>
using namespace std;
int main(){
   string name;
   cout<<"Enter the name of person:"<<endl;
   cin>>name;
   float weight;
   cout<<"Enter the target weight loss in kilograms:"<<endl;
   cin>>weight;
   float days=weight*15;
   cout<<name<<" will need "<<days<<" days to lose "<<weight<<" of weight by the doctor's suggestions"<<endl;
   return 0;
   } 
