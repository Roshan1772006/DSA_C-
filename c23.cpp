#include<iostream>
using namespace std;
int main(){
    int x, y;
    cout << "Enter the x co-ordinate : ";
    cin >> x;
    cout << "Enter the y co-ordinates : ";
    cin >> y;
    if (x == 0 && y == 0) {
        cout << "Origin" << endl;
    }
        if(x > 0){
            if(y > 0) {
                cout << "1st Quadrant" << endl;
            }
            else {
                cout << "4th Quadrant" << endl;
            }
        }
        else{
            if(y > 0) {
                cout << "2nd Quadrant" << endl;
            }
            else {
                cout << "3rd Quadrant" << endl;
            }
        }
}