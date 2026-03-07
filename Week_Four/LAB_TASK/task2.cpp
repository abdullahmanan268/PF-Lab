#include<iostream>
using namespace std;
int main(){
    int salary=10000;
    int month=6;
    int laptop=50000;
    int advance_sal= (month*salary) *0.5;
    if (advance_sal>=laptop){
       cout<<"You can  buy a laptop"<<endl;
       }
     else{
       int req_month= laptop/(salary*0.5);
       cout<<"Months required to buy laptop: "<<req_month<<endl;
       }
       return 0;
       }  
    
