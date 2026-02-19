#include <iostream>
using namespace std;
int main(){
    double p, r, t, SI;
    cout<<"Enter the principle: ";
    cin>>p;
    cout<<"Enter the rate of interset: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    SI = (p*r*t)/100;
    cout<<"Simple Interset of given data: "<<SI;

}