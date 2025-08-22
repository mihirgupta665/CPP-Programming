#include<iostream>
#include<string>
using namespace std;

class STOCK {
private:
    string name;
    int price;
    int quantity;
    int revenue;

public:
    // Constructor with default parameters
    STOCK(string name = " ", int price = 0, int quantity = 0) : name(name), price(price), quantity(quantity), revenue(0) {
        cout << "Constructor is initialized" << endl;
    }

    // Copy constructor
    STOCK(const STOCK& s) {
        name = s.name;
        price = s.price;
        quantity = s.quantity;
        revenue = 0;  // Reset revenue for the copied object
        cout << "Copy constructor called!" << endl;
    }

    // Evaluation function to calculate sales
    void evaluation() {
        while (true) {
            int sales;
            cout << "Enter the number of sales : ";
            cin >> sales;
            if (sales == 0) {
                break;
            }
            if (sales > quantity) {
                cout << "Not available sufficient quantity of sales." << endl;
            } else {
                quantity -= sales;
                revenue += sales * price;
            }
        }
    }

    // Destructor to display total revenue and remaining stock
    ~STOCK() {
        cout << "Total Revenue : " << revenue << endl;
        cout << "Final Stock Quantity : " << quantity << endl;
        cout << "Destructor Accessed" << endl;
    }
};

int main() {
    string name;
    int price, quantity;

    // Use getline to read the product name correctly
    cout << "Enter the name of product : ";
    cin.ignore();  // Ignore any leftover characters
    getline(cin, name);

    cout << "Enter the price of product : ";
    cin >> price;

    cout << "Enter the number of quantity : ";
    cin >> quantity;

    STOCK stock(name, price, quantity);  // Create original object
    STOCK product = stock;  // Copy the original object using the copy constructor

    // Only the original stock object will be evaluated
    stock.evaluation();

    return 0;
}

