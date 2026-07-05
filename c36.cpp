#include<iostream>
using namespace std;
int main(){
    int n;
        cout << "Enter the number of terms: ";
        cin >> n;
        cout << endl;
        int a = 4, d = 6;
        for(int i = 1; i <= n; i++){
            cout << a << " ";
            a += d;
        }
    }