#include<iostream>
using namespace std;
int main(){
   int holiday;
   cout<<"Holidays: "<<endl;
   cin>>holiday;
   int work =365 -holiday;
   int play_time= (work *63) + (holiday *127);
   int normal=30000;
   if(play_time>normal){
       int diff= play_time - normal;
       int hours=diff/60;
       int min=diff%60;
       cout<<"Tom will run away"<<endl;
       cout<<hours<<" hours and  "<<min<<" minutes for play"<<endl;
       }
       else{
        int diff=normal - play_time;
       int hours=diff/60;
       int min=diff%60;
       cout<<"Tom sleeps well"<<endl;
       cout<<hours<<" hours and  "<<min<<" minutes  less for play"<<endl;
       }
       return 0;
       }
   
