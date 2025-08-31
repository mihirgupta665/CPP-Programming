#include <iostream>
#include <iomanip>  // Required for manipulators

using namespace std;  // Use the std namespace

int main() {
    double pi = 3.14159265358979;
    
    // Using setprecision and fixed to control decimal points
    cout << "Pi (4 decimal places): " << fixed << setprecision(4) << pi << endl;
    
    // Using setw and setfill for width and padding
    cout << "Padded number: "  << setw(10) << setfill('-') << 123 << endl;
    
    // Using left and right alignment
    cout << left << setw(10) << 42 << "Left aligned" << endl;
    cout << right << setw(10) << 42 << "Right aligned" << endl;
    
    // Using boolalpha
    bool flag = true;
    cout << "Boolean with boolalpha: " << boolalpha << flag << endl;
    
    return 0;
}
