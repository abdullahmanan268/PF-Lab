#include<iostream>
using namespace std;
 int main(){
int num1,num2;
string operation;
int result;
   cout<<"Welcome to the inverse calculator"<<endl;
   cout<<"Enter first number:"<<endl;
   cin>>num1;
   cout<<"Enter the operator:"<<endl;
   cin>>operation;
   cout<<"Enter the second number:"<<endl;
   cin>>num2;
   if(operation=="+"){
   result=num1 -num2;
    cout<<num1<<" - "<<num2<<" = "<<result<<endl;
    }
    if(operation=="-"){
   result=num1 +num2;
    cout<<num1<<" +"<<num2<<" = "<<result<<endl;
    }
    if(operation=="*"){
   result=num1 /num2;
    cout<<num1<<" / "<<num2<<" = "<<result<<endl;
    }
    if(operation=="/"){
   result=num1 *num2;
    cout<<num1<<" * "<<num2<<" = "<<result<<endl;
    }
    return 0;
    }
