#include <iostream>
#include <cmath>  // Required for mathematical functions

using namespace std;

int main() {
    double num = 25.0;
    double angle = M_PI / 4;  // 45 degrees in radians

    // Square root
    cout << "Square root of " << num << " is " << sqrt(num) << endl;

    // Power
    cout << "2 raised to the power of 3 is " << pow(2, 3) << endl;

    // Absolute value
    cout << "Absolute value of -5 is " << abs(-5) << endl;

    // Trigonometric functions
    cout << "sin(45 degrees) = " << sin(angle) << endl;
    cout << "cos(45 degrees) = " << cos(angle) << endl;
    cout << "tan(45 degrees) = " << tan(angle) << endl;

    // Logarithmic functions
    cout << "Natural log of e is " << log(M_E) << endl;
    cout << "Log base 10 of 1000 is " << log10(1000) << endl;

    // Exponential function
    cout << "e raised to the power of 1 is " << exp(1) << endl;

    // Rounding functions
    double value = 3.75;
    cout << "Ceiling of " << value << " is " << ceil(value) << endl;
    cout << "Floor of " << value << " is " << floor(value) << endl;
    cout << "Rounded value of " << value << " is " << round(value) << endl;

    return 0;
}
