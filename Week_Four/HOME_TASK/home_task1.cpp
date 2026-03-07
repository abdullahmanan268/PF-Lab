#include<iostream>
using namespace std;
int main(){
   string name;
   cout<<"Enter country name: "<<endl;
   cin>>name;
   int price;
   float dis;
   cout<<"Enter ticket price: "<<endl;
   cin>>price;
     if(name=="Ireland"){
          dis=(price*0.10);
          }
          else{
          dis=(price*0.05);
          }
          cout<<"Discounted Price: "<< price - dis<<endl;
          return 0;
         }
   
