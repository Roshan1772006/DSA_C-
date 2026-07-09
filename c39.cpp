#include<iostream>
using namespace std;
int main(){
    int n;
        cout << "Enter the a number: ";
        cin >> n;
        int t = 1;
        int x = n;
        for(int i=0; i<=5; i++){
            if(i%2 == 0){
                cout << t << endl;
                t++;
            }
            else{
                cout << x << endl;
                x--;
            }
        }
    }