#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int a = 1, r = 2;
    for(int i = 0; i <= n; i++){
        cout << a << endl;
        a *= r;
    }
}