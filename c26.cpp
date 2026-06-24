#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;

    // condition ? sach : jhoot
    cout << ((n % 2 == 0) ? "Even" : "Odd") << endl;
}