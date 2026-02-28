#include<iostream>
using namespace std;
int main(){
   int age,move;
   cout<<"Enter the person's age:"<<endl;
   cin>>age;
   cout<<"Enter the no of times they've move:"<<endl;
   cin>>move;
   int houses=move+1;
   int average= age /houses;
   cout<<"Average number of years lived in the same house: "<<average<<endl;
   return 0;
   }
