#include<iostream>
using namespace std;
int main(){
    // Area of circle kya hota hai?

     double pi = 3.14;
     int r;
     cout<<"Enter a number: ";
     cin>>r;
     cout<<"Area of circle: "<<(4/3)*pi*r*r*r;

     cout<<endl;

     //tsa of cuboid
     int l = 10, b=5, h=10;
     int a = 2*(l*h+h*b+l*b);
     cout<<"Total surface area of cubiod : "<< a;
}