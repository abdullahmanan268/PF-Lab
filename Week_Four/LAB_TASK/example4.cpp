#include<iostream>
using namespace std;
int main(){
   string my_pass,user_pass;
   my_pass="Pass@123!";
   cout<<"Enter the password"<<endl;
   cin>>user_pass;
   if(user_pass==my_pass){
      cout<<"Wow !You have cracked the code!"<<endl;
      }
      else{
         cout<<"It is not that simple,Try again"<<endl;
         }
         return 0;
         }
   
   
