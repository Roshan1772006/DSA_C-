#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n<0) n= -n;
    if(n<69) cout << "smaller than 69" << endl;
    else cout << "not smaller than 69" << endl;
}