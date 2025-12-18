#include <iostream>
#include <cmath>
#include <bitset>

using namespace std; 

int main() {
    double a; 
    unsigned int r; 
    
    cout << "a: ";
    cin >> a;

   
    int s, e;
    unsigned int m;

    
    if (a < 0) { s = 1; a = -a; } 
    else { s = 0; }

  
    double L = pow(2, -126); // Limit

    if (a > 0 && a < L) {
      
        e = 0;
        m = a * pow(2, 149); // m = a * 2^149
    } 
    else if (a == 0) {
        e = 0;
        m = 0;
    }
    else {
       
        int k = floor(log2(a)); 
        e = k + 127;
        double f = (a / pow(2, k)) - 1; 
        m = f * pow(2, 23);
    }

    r = (s << 31) | (e << 23) | (m & 0x7FFFFF);

    cout << "-------------------------------------" << endl;
    cout << "s: " << s << " e: " << e << " m: " << m << endl;
    cout << "Result: " << r << endl;
    cout << "Bits: " << bitset<32>(r) << endl;

    return 0;
}
