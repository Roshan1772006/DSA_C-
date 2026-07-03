#include <iostream>
using namespace std;
int main() {
    // table of 17 
        for(int i=0; i<=170; i++){
            if(i%17 == 0) cout << i << " ";
        }

        cout << endl;
        cout << endl;

        // best way to use for loop 
        for(int i=0; i<=170; i+=17){
            cout << i << " ";
        }
    }