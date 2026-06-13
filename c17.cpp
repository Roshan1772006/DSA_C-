#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n%5 == 0) cout << "divisible by 5" << endl;
        if(n%3 == 0) cout << "divisible by 3" << endl;
        if(n%5 == 0 && n%3 == 0) cout << "divisible by 5 and 3" << endl;
        if(n%5 != 0 || n%3 != 0) cout << "Not divisible by 5 or 3" << endl;
}