#include<iostream>
using namespace std;
int main(){
  float size, cost, area, cpp,cps;
  cout<<"Enter the size of fertilizer bag in pounds:"<<endl;
  cin>>size;
  cout<<"Enter the cost of the bag:"<<endl;
  cin>>cost;
  cout<<"Enter the area in square feet that can be covered by the bag:"<<endl;
  cin>>area;
  cpp=cost/size;
  cps=cost/area;
  cout<<"Cost of fertilizing per pound: "<<cpp<<endl;
  cout<<"Cost of fertilizing per square foot: "<<cps<<endl;
  return 0;
  }
