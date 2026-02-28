#include<iostream>
using  namespace std;
int main(){
   int digit ,num,sum;
   sum=0;
   cout<<"Enter a four digit number:"<<endl;
   cin>>num;
   digit=num%10;
   sum =sum+digit;
   num = num/10;
 
   digit=num%10;
   sum =sum+digit;
   num = num/10;

   digit=num%10;
   sum =sum+digit;
   num = num/10;
   
   digit=num%10;
   sum =sum+digit;
    cout<<"Sum of digits = "<<sum<<endl;
    return 0;
    }

