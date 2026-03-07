 #include<iostream>
using namespace std;
int main(){
  float bill; 
  int dis_bill; 
  cout<<"Enter your bill:"<<endl;
  cin>>bill;
      if(bill<=5000){
             dis_bill=(bill -(bill*0.05)) + 0.5;        
      }
      else{
             dis_bill=(bill - (bill*0.1)) + 0.5;             
          }
              
               cout<<"Your discounted bill is: "<<dis_bill<<endl;
          return 0;
          }
           
  
