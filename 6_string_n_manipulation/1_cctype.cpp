#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch = 'G';

    if (isalpha(ch)) {
        cout << ch << " is a letter." << endl;

        if (islower(ch)) {
            cout << ch << " is lowercase." << endl;
        } else if (isupper(ch)) {
            cout << ch << " is uppercase." << endl;
        }

        // Convert to lowercase
        char lower = tolower(ch);
        cout << "Lowercase: " << lower << endl;
    } else {
        cout << ch << " is not a letter." << endl;
    }

    return 0;
}
