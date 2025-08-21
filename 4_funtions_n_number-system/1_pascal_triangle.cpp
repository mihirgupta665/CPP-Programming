#include <iostream>
using namespace std;

// Function to calculate factorial
int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

// Function to calculate nCr (combinations)
int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        // Print spaces for pyramid shape
        for (int s = 0; s < n - i - 1; s++)
            cout << "  ";

        // Print values using nCr
        for (int j = 0; j <= i; j++)
            cout << nCr(i, j) << "   ";

        cout << endl;
    }

    return 0;
}
