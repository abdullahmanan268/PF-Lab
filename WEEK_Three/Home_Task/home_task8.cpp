#include<iostream>
using namespace std;
int main(){
  float vegPrice, fruitPrice;
  int vegKg, fruitKg;
  cout<<"Enter vegetable price per kilogram (in coins) :"<<endl;
  cin>>vegPrice;
  cout<<"Enter fruit price per kilograms(in coins):"<<endl;
  cin>>fruitPrice;
  cout<<"Enter total kilograms of vegetables:"<<endl;
  cin>>vegKg;
  cout<<"Enter total kilograms of fruits:"<<endl;
  cin>>fruitKg;
  float totalcoin= (vegPrice * vegKg) + (fruitPrice * fruitKg);
  float totalrupees = totalcoin/1.94;
  cout<<"Total earning in rupees(Rps): "<<totalrupees<<endl;
  return 0;
  }
