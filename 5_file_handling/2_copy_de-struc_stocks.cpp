/*
Input 1 :
Pen
30
10
2
1
0
Output 1 :
Total revenue: 90
Final stock quantity: 7
*/

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
    STOCK(string name=" ",int price=0,int quantity=0,int revenue=0 ) : name(name),price(price),quantity(quantity) {
        cout<<"Constructor is initialized"<<endl;
    }
    STOCK(const STOCK& s){  //copy constructor
        name=s.name;
        price=s.price;
        quantity=s.quantity;
        revenue=0;
        cout<<"Copy constructor called."<<endl;
    }
    void evaluation(){
        while(true){
            int sales;
            cout<<"Enter the number of sales : ";
            cin>>sales;
            if(sales==0){
                break;
            }
            if(sales>quantity){
                cout<<"Not availabe sufficient quantity of sales.";
            }
            else{
                quantity-=sales;
                revenue+=sales*price;
            }
        }
    }
    ~STOCK(){
        cout<<"Total Revenue : "<<revenue<<endl;
        cout<<"Total Stock Qantity : "<<quantity<<endl;
        cout<<"Destructor Accessed"<<endl;;
    }
};
int main(){
    string name;
    int price,quantity;
    cout<<"Enter the name of product : ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter the price of product : ";
    cin>>price;
    cout<<"Enter the number of quantity : ";
    cin>>quantity;
    STOCK stock(name,price,quantity);
    // STOCK product=stock;                          // uncomment to make a copy of object.
    stock.evaluation();
    return 0;
}