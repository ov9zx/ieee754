#include <iostream>
#include <cmath>
#include <bitset>

using namespace std;

int main() {
double a;
unsigned int  ieee ;
    cout << "a: ";

    cin >> a;
    int S ;

    if(a<0) {S=1; a = -a;} else {S = 0;}

    int b = int (a);
    double f = a-b;
    int k = 0;

    int temp = b;

    while (temp>0){k++; temp/= 2; }
    int E = k-1+127;
    float M = (a/pow(2,k-1)) - 1 ;
    cout<<S<<"  "<<b<<"  "<<f<<"  "<<E<<"  "<<M<<endl;
    cout<<"-------------------------------------"<<endl;


   ieee = (S << 31) | (E << 23) | (int)(M * pow(2, 23));
    cout<<ieee;

    return 0;
}
