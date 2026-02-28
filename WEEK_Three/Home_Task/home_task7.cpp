#include<iostream>
using namespace std;
int main(){
  string name;
  int aprice,cprice,asold,csold;
   float charity;
  cout<<"Enter the movie name:"<<endl;
  cin>>name;
  cout<<"Enter the adult ticket price:"<<endl;
  cin>>aprice;
  cout<<"Enter the child ticket price:"<<endl;
  cin>>cprice;
  cout<<"Enter the number of adults tickets sold:"<<endl;
  cin>>asold;
  cout<<"Enter the number of child tickets sold:"<<endl;
  cin>>csold;
  cout<<"Enter the percentage of amount to be donated to charity:"<<endl;
  cin>>charity;
  int total=(aprice*asold) + (cprice *csold);
  float donation=total *(charity/100);
  int atotal= total - donation;
  cout<<"---------------------------------------------------------"<<endl;
  cout<<"Movie: "<<name<<endl;
  cout<<"Total amount generated from ticket sales: "<<total<<endl;
  cout<<"Donation to charity ("<<charity<<"): "<<donation<<endl;
  cout<<"Remaining  amount after donation: "<<atotal<<endl;
  return 0;
  }
  
  
