#include<bits/stdc++.h>
using namespace std;
int main(){
    double magnitude, angle; // in degrees
    cout << "Magnitude of Polar form: ";
    cin >> magnitude;
    cout << "Enter angle(in degrees): ";
    cin >> angle;

    complex<double> rectangular_complex(magnitude * cos(angle * M_PI / 180), magnitude * sin(angle * M_PI / 180));

    cout << "Rectangular form: " << rectangular_complex << endl;
    return 0;
}