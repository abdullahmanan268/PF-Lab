#include<iostream>
using namespace std;
int main(){
  int age , moves;
  cout<<"Enter age:"<<endl;
  cin>>age;
  cout<<"Enter moves:"<<endl;
  cin>>moves;
  int houses = moves + 1;
  int average = (age + houses/2)/houses;
  cout<<"Average years = "<<average<<endl;
  return 0;
  }
