#include <iostream>
#include <cmath>

using namespace std; 

int main() {
    unsigned int r; 
    cout << "ieee: ";
    cin >> r;

    unsigned int s = (r >> 31);
    unsigned int e = (r >> 23) & 255;
    unsigned int m = r & 8388607;

    double a; 

    if (e == 0) {
        
        a = pow(-1, s) * pow(2, -126) * (m / 8388608.0);
    } else {
        
        a = pow(-1, s) * pow(2, (int)e - 127) * (1.0 + (double)m / 8388608.0);
    }

    cout << "s: " << s << " e: " << e << " m: " << m << endl;
    cout << "Result: " << a << endl; 

    return 0;
}
