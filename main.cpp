#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
    float A;
    cout << "A: ";
    cin >> A;

    unsigned int S, E, M, F;
    int k;
    if (A == 0.0f) {
        F = 0;
        cout << "A= 0." << endl;
        cout << " (IEEE 754): " << bitset<32>(F) << endl;
    }
    else {
        S = (A < 0) ? 1 : 0;
        k = log2(abs(A));
        E = k + 127;
        float R = (abs(A) / pow(2, k)) - 1.0f;
        M = (R * pow(2, 23));
        F = (S << 31) | (E << 23) | M;
        cout << " (S): " << S << endl;
        cout << " (k): " << k << endl;
        cout << " (E = k + 127): " << E << endl;
        cout << " (M): " << M << endl;
        cout << " F (bites): " << bitset<32>(F) << endl;
        cout << "Hex:    " << hex << uppercase << F << endl;
    }

    return 0;
}
