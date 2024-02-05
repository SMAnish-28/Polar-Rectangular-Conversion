#include<bits/stdc++.h>
using namespace std;
int main(){
    double real, imag;
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;
    
    double magnitude = sqrt(real * real + imag * imag);
    double angle = atan2(imag, real) * 180 / M_PI;

    cout << "\nPolar form: (" << magnitude << ", " << angle << " degrees)" << endl;
    return 0;
}