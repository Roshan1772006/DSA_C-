#include <iostream>
using namespace std;
int main() {
    double cp, sp;
    cout << "Enter the cost price : ";
    cin >> cp;
    cout << "Enter the selling price : ";
    cin >> sp;
    double t = 0;
        t = sp - cp;
        double p = (t/cp)*100;
        if(sp > cp) cout << "the Profit of : " << t << " and profit percentage : " << p << "%" << endl;
        if(sp < cp) cout << "lose of : " << (-t) << " and lose percentage : " << p << "%" << endl;
        if(sp == cp) cout << "No Profit or Lose" << endl;
}