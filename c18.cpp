#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (n>999 && n<10000) cout << "4 digit number" << endl;
    else cout << "not a 4 digit number" << endl;
}