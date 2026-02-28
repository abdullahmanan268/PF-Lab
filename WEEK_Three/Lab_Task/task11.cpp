#include<iostream>
using namespace std;
int main(){
int population;
cout<<"Enter the current world population:"<<endl;
cin>>population;
int n;
cout<<"Enter the monthly birth rate( numbers of births per month):"<<endl;
cin>>n;
int future_pop =population + (n *360);                             // three decade=30 years     30*12=360 
cout<<"Population in three decades will be : "<<future_pop<<endl;
 return 0;
 }                                                                            
