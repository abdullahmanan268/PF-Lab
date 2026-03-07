#include<iostream>
using namespace std;
int main(){
    int temp1,temp2;
    cout<<"Temperature City 1: "<<endl;
    cin>>temp1;
    cout<<"Temperature City 2: "<<endl;
    cin>>temp2;
    int diff=temp1 -temp2;
    if(diff<=10){
      cout<<"Programs end."<<endl;
      }
      else{ 
      cout<<"Difference is too big"<<endl;
      cout<<"Program ends"<<endl;
      }
      return 0;
      }
