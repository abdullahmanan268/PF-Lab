#include<iostream>
using namespace std;
int main(){
  int min , fps , frames;
  cout<<"Enter mintues:"<<endl;
   cin>>min;
  cout<<"Enter fps:"<<endl;
  cin>>fps;
  frames= min * 60 * fps;
  cout<<"Total frames = "<<frames<<endl;
  return 0;
  }

