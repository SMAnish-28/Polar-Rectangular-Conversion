#include <bits/stdc++.h>
using namespace std;
void rec2pol()
{
    double real, imag;
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> imag;

    double magnitude = sqrt(real * real + imag * imag);
    double angle = atan2(imag, real) * 180 / M_PI;

    cout << "\nPolar form: (" << magnitude << ", " << angle << " degrees)" << endl;
}

void pol2rec()
{
    double magnitude, angle; // in degrees
    cout << "Magnitude of Polar form: ";
    cin >> magnitude;
    cout << "Enter angle(in degrees): ";
    cin >> angle;

    complex<double> rectangular_complex(magnitude * cos(angle * M_PI / 180), magnitude * sin(angle * M_PI / 180));

    cout << "Rectangular form: " << rectangular_complex << endl;
}

int main()
{
    int choice;
    do
    {
        cout << "-------------MENU-------------" << endl;
        cout << "1- Rectangular to Polar Conversion" << endl;
        cout << "2- Polar to Rectangular Conversion" << endl;
        cout << "3- Exit" << endl;
        cout << "------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            rec2pol();
            break;
        case 2:
            pol2rec();
            break;
        case 3:
            break;
        default:
            cout << "Invalid Choice!" << endl;
            break;
        }
        cout << endl;
    } while (choice != 3);

    return 0;
}