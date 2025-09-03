#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declaration and Initialization
    string str1;                // Empty string
    string str2 = "Hello";      // Initialized with C-style string
    string str3("World");       // Direct initialization
    string str4(str2);          // Copy constructor
    string str5(5, 'A');        // Five 'A' characters

    cout << "String str2: " << str2 << endl;
    cout << "String str3: " << str3 << endl;
    cout << "String str4 (copy of str2): " << str4 << endl;
    cout << "String str5 (five 'A' characters): " << str5 << endl;

    // String Length
    size_t len = str2.length();  // or str2.size();
    cout << "Length of str2: " << len << endl;

    // String Concatenation
    string result = str2 + " " + str3; // "Hello World"
    cout << "Concatenated string (str2 + str3): " << result << endl;

    str2 += " Everyone";   // str2 becomes "Hello Everyone"
    cout << "Modified str2 after concatenation: " << str2 << endl;

    // Accessing Characters
    char ch = str2[1];     // Access character at index 1
    char ch2 = str2.at(1); // Same, but with bounds checking
    cout << "Character at index 1 of str2: " << ch << endl;

    // String Comparison
    bool isEqual = (str2 == str3); // false
    int cmp = str2.compare(str3);  // Compare str2 and str3
    cout << "Is str2 equal to str3? " << (isEqual ? "Yes" : "No") << endl;
    cout << "Comparison of str2 and str3: " << cmp << endl;

    // String Substring
    string sub = result.substr(0, 5);  // Extracts "Hello" from result
    cout << "Substring of result (first 5 characters): " << sub << endl;

    // String Insertion
    str3.insert(5, ", Beautiful");  // Insert substring into str3
    cout << "String after insertion into str3: " << str3 << endl;

    // String Erasing
    str3.erase(5, 11);  // Remove ", Beautiful" from str3
    cout << "String after erasing part of str3: " << str3 << endl;

    // String Find
    size_t pos = result.find("World");  // Find position of "World" in result
    if (pos != string::npos) {
        cout << "'World' found in result at position: " << pos << endl;
    }

    // String Replace
    result.replace(6, 5, "C++");  // Replace "World" with "C++"
    cout << "String after replacement in result: " << result << endl;

    // Empty Check
    if (str1.empty()) {
        cout << "str1 is empty." << endl;
    }

    // Clear the string
    str1 = "Some text";
    cout << "str1 before clear: " << str1 << endl;
    str1.clear();
    cout << "str1 after clear: '" << str1 << "'" << endl;

    // Push Back / Pop Back
    str2.push_back('!');  // Append a character
    cout << "str2 after push_back: " << str2 << endl;

    str2.pop_back();      // Remove the last character
    cout << "str2 after pop_back: " << str2 << endl;

    // Iterating through the string
    cout << "Characters in str2: ";
    for (char ch : str2) {
        cout << ch << ' ';
    }
    cout << endl;

    return 0;
}
