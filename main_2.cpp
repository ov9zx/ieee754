#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned int ieee;
    cout << "ieee: ";
    cin >> ieee;

    unsigned int S = (ieee >> 31);
    unsigned int E = (ieee >> 23) & 255;
    unsigned int M = ieee & 8388607;
    float result;
    if (E == 0) {

        result = pow(-1, S) * pow(2, -126) * (M / 8388608.0);
    } else {

        result = pow(-1, S) * pow(2, E - 127) * (1.0 + M / 8388608.0);
    }

    cout << "S: " << S << " E: " << E << " M: " << M << endl;
    cout << "IEEE 754: " << ieee << " -> " << result << endl;

    return 0;
}

//1125883904_155.625


//3273367552_-155.625

//
