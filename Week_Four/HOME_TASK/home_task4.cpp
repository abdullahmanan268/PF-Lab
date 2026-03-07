#include<iostream>
using namespace std;
int main(){
  int white, red,tulip;
  float dis =0;
  cout<<"Red Roses"<<endl;
  cin>>red;
  cout<<"WHite Roses"<<endl;
  cin>>white;
  cout<<"Tulip"<<endl;
  cin>>tulip;
  float price= (red*2) + (white*4.10) + (tulip*2.50);
  if(price>200){
   dis=price*0.20;
   }
   cout<<"Original Price: "<<price<<endl;
   cout<<"Price after Discount: "<< price - dis<<endl;
   return 0;
   }
   
   
