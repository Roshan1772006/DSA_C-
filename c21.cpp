#include <iostream>
using namespace std;
int main() {
    int a ;
    int b ;
    int c ;
    cout << "Enter a first number : ";
    cin >> a;
    cout << "Enter a second number : ";
    cin >> b;
    cout << "Enter a third number : ";
    cin >> c;
    if((a+b)>c && (b+c)>a && (c+a)>b) cout << "this 3 number are side of triangle" << endl;
    else cout << "this 3 number are not side of triangle" << endl;
}