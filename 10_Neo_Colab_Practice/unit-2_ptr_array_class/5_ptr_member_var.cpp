/*
Input 1 :
John
5
1000 2000 1500 3000 2500  

Output 1 :
Salesperson Details:
Name: John
Total Sales: 10000
Average Sales: 2000
*/
#include<iostream>
using namespace std;
class Salesperson {
    public:
    string name;
    int nom;
    int totalsum;
};
int main(){
    Salesperson salesperson;
    Salesperson* salespersonptr = &salesperson;
    cout<<"Enter the name of saleperson : ";
    cin>>salespersonptr->name;
    cout<<"Enter the number of months : ";
    cin>>salespersonptr->nom;
    int NOM=salespersonptr->nom;
    int sumsales=0;
    for(int i=0;i<NOM;i++){
        int sales;
        cout<<"Enter the sale for "<<i+1<<" month : ";
        cin>>sales;
        sumsales+=sales;
    }
    salespersonptr->totalsum=sumsales;
    int Salesperson::* memberptr = &Salesperson::totalsum;
    int averagesales = salesperson.*memberptr/salesperson.nom;
    cout<<"Salesperson Details:\n";
    cout<<"Name : "<<salespersonptr->name<<endl;
    cout<<"Number of Months : "<<salespersonptr->nom<<endl;
    cout<<"Total sales : "<<salesperson.*memberptr<<endl;
    cout<<"Average sales : "<<averagesales<<endl;
    return 0;
}