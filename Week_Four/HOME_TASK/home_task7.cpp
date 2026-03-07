#include<iostream>
using namespace std;
int main(){
   string figure;
   cout<<"Enter type of figure:"<<endl;
   cin>>figure;
   if(figure=="Square"){
    int side;
    cout<<"Enter side: "<<endl;
    cin>>side;
    float area= side*side;
    cout<<"Area of "<<figure<<"is "<<area<<endl;
    }
      if(figure==" Rectangle"){
       float length,width;
       cout<<"Enter length and width :"<<endl;
       cin>>length>>width;
       float area= length*width;
        cout<<"Area of "<<figure<<"is "<<area<<endl;
    }
       if(figure=="Circle"){
        float radius;
        cout<<"Enter radius:"<<endl;
        cin>>radius;
        float area=radius*3.1457;
         cout<<"Area of "<<figure<<"is "<<area<<endl;
    }
       if(figure=="Triangle"){
          float base,  height;
          cout<<"Enter base and height:"<<endl;
          cin>>base>>height;
          float area= 1/2 *base*height;
           cout<<"Area of "<<figure<<"is "<<area<<endl;
    }
    return 0;
    }
          
       
    
