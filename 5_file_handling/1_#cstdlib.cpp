#include <iostream>
#include <cstdlib>  // Includes all the functions from cstdlib
#include <ctime>    // For random seed generation with time()

using namespace std;

// Comparison function for qsort() and bsearch()
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

void demonstrateMemoryManagement() {
    // Memory management example using malloc, realloc, and free
    cout << "\nMemory Management Example:\n";
    int* arr = (int*) malloc(5 * sizeof(int));  // Allocate memory for 5 integers
    if (arr == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return;
    }
    
    // Initialize and print the array
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        cout << arr[i] << " ";
    }
    cout << "\nMemory reallocated...\n";

    // Reallocate memory for 10 integers
    arr = (int*) realloc(arr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    // Print the resized array
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }

    // Free the allocated memory
    free(arr);
}

void demonstrateProcessControl() {
    // System command and process control
    cout << "\n\nProcess Control Example:\n";
    system("echo Hello from the system command!");

    // Registering a function with atexit()
    auto goodbye = []() {
        cout << "Goodbye from atexit function!\n";
    };
    atexit(goodbye);

    // Calling exit() function
    cout << "Exiting the program now...\n";
    exit(0);  // This will terminate the program
}

void demonstrateRandomNumbers() {
    // Random number generation using srand() and rand()
    cout << "\nRandom Number Generation Example:\n";
    srand(time(0));  // Seed the random number generator with the current time

    for (int i = 0; i < 5; i++) {
        cout << rand() % 100 << " ";  // Generate random numbers between 0 and 99
    }
    cout << endl;
}

void demonstrateTypeConversion() {
    // Type conversion using atoi, atol, and atof
    cout << "\nType Conversion Example:\n";

    const char* intStr = "123";
    const char* longStr = "123456789";
    const char* floatStr = "12.34";

    int intVal = atoi(intStr);     // Convert string to int
    long longVal = atol(longStr);  // Convert string to long
    double floatVal = atof(floatStr); // Convert string to double

    cout << "Integer: " << intVal << endl;
    cout << "Long: " << longVal << endl;
    cout << "Float: " << floatVal << endl;
}

void demonstrateSortingSearching() {
    // Sorting and searching using qsort() and bsearch()
    cout << "\nSorting and Searching Example:\n";

    int arr[] = {5, 2, 9, 1, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Sort the array using qsort
    qsort(arr, size, sizeof(int), compare);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Search for an element using bsearch
    int key = 5;
    int* found = (int*) bsearch(&key, arr, size, sizeof(int), compare);

    if (found) {
        cout << "Element " << key << " found in the array." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }
}

void demonstrateEnvironmentVariables() {
    // Getting and setting environment variables
    cout << "\nEnvironment Variables Example:\n";

    char* path = getenv("PATH");  // Get the PATH environment variable
    if (path) {
        cout << "Current PATH: " << path << endl;
    }

    setenv("MY_VAR", "123", 1);  // Set an environment variable
    cout << "MY_VAR set to: " << getenv("MY_VAR") << endl;

    unsetenv("MY_VAR");  // Unset the environment variable
    if (!getenv("MY_VAR")) {
        cout << "MY_VAR has been unset." << endl;
    }
}

int main() {
    demonstrateMemoryManagement();

    demonstrateRandomNumbers();

    demonstrateTypeConversion();

    demonstrateSortingSearching();

    demonstrateEnvironmentVariables();

    // Uncomment the following line to see process control (exit)
    demonstrateProcessControl(); // This will terminate the program
}
