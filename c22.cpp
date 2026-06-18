#include <iostream>
using namespace std;
int main() {
    int l, b;
    cout << "Enter the length: ";
    cin >> l;
    cout << "Enter the breadth: ";
    cin >> b;
    int perimeter = 2 * (l + b);
        int area = (l*b);
        if(area > perimeter) {
            cout << "area is greater than perimeter" << endl;
        }
        else{
            cout << "perimeter is greater than area" << endl;
        }
}