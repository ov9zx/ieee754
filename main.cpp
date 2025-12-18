#include <iostream>
#include <cmath>
#include <bitset>

using namespace std; // Here is the namespace you requested! ✅

int main() {
    double a;
    unsigned int ieee;
    cout << "a: ";

    cin >> a;
    int S;

    if (a < 0) { S = 1; a = -a; } 
    else { S = 0; }

    int E;
    unsigned int M_small; 

   
    if (a < pow(2, -126)) {
        E = 0;              
        M_small = a * pow(2, 149); 
    } 
    else {
        
        int b = int(a);
        double f = a - b;
        int k = 0;
        int temp = b;

        while (temp > 0) { k++; temp /= 2; }
        
        E = k - 1 + 127;
        float M = (a / pow(2, k - 1)) - 1;
        M_bits = (int)(M * pow(2, 23));
        
        cout << S << "  " << b << "  " << f << "  " << E << "  " << M << endl;
    }

    cout << "-------------------------------------" << endl;

    ieee = (S << 31) | (E << 23) | M_bits;
    cout << "Result: " << ieee << endl;
    cout << "Binary: " << bitset<32>(ieee) << endl;

    return 0;
}
