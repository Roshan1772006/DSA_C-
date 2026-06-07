#include<iostream>
using namespace std;
int main(){
    double n;
    cout<<"Enter a real number: ";
    cin>>n;
    int x = (int)n;
    if(n-x > 0) cout<<"Not an integer "<<endl;
    else cout<<"Is an integer "<<endl;
}