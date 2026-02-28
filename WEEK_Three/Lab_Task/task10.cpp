#include<iostream>
using namespace std;
int main(){
int win , draw ,loss;
cout<<"Enter no of wins:"<<endl;
cin>>win;
cout<<"Enter no of draws:"<<endl;
cin>>draw;
cout<<"Enter no of losses:"<<endl;
cin>>loss;
win=win*3;
draw=draw*1;
loss=loss*0;
int points =win + draw +loss;
cout<<"Pakistan has obtained "<<points<<" in Asia Cup Tournament"<<endl;
return 0;
}

