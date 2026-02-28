#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the number of sides of the polygon :"<<endl;
  cin>>n;
  int angle=(n-2)*180;
  cout<<"The the total sum of interior angles of a: "<<n<<" -sided polygon is: "<<angle<<" degrees"<<endl;
  return 0;
  }
