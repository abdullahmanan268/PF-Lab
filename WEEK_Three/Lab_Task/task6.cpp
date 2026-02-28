#include<iostream>
using  namespace std;
int main(){
double MB, bits;
cout<<"Enter the size in megabytes(MB):"<<endl;
cin>>MB;
bits=MB *1024 *1024 *8;
cout<<MB<<" MB is equivalent to "<<bits<<" bits"<<endl;
return 0;
}
