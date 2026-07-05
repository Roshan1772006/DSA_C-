#include<iostream>
using namespace std;
int main() {
         int n;
        cout << "Enter the no. of term : ";
        cin >> n;
        for(int i=2; i<=3*n-1 ; i+=3){
            cout << i << " ";
        }

        cout << endl;
        for(int i=2; i<=3*n-1 ; i+=3){
            cout << i << " ";
        }   
}