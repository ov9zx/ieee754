#include <iostream>
#include <cmath>
using namespace std;

int main() {
    unsigned int ieee ;
    cout<<"ieee:";
    cin>>ieee;

    int S = (ieee >> 31) ;
    int E = (ieee >> 23) ;
    unsigned int M = ieee & ((1 << 23) - 1);

    double result = pow(-1, S) * pow(2, E - 127) * (1.0 + M / pow(2,23));

    cout << "IEEE 754: " << ieee << " -> " << result << endl;
    cout << "M: " << M << endl;

    return 0;
}
//1125883904
