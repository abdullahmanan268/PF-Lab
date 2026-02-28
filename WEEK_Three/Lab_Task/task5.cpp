#include<iostream>
using namespace std;
int main(){
string name;
 cout<<"Enter the student's name:"<<endl;
 cin>>name;
 float matric_marks;
 cout<<"Enter matriculation marks (out of 1100) :"<<endl;
 cin>>matric_marks;
 float inter_marks;
 cout<<"Enter intermediate marks (out of 550) :"<<endl;
 cin>>inter_marks;
 float ecat;
 cout<<"Enter Ecat marks (out of 400) :"<<endl;
 cin>>ecat;
 float aggregate =(inter_marks/550)*40 + (matric_marks/1100)*10 +(ecat/400)*50;
 cout<<"Aggregate score for "<<name<<" is "<<aggregate<<" %"<<endl;
 return 0;
 }
