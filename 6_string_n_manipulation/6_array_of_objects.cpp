/*
Input 1 :
4
Food 25.50 2023-01-15
Transportation 12.75 2023-01-16
Shopping 50.00 2023-01-18
Food 15.25 2023-01-20
Food
Output 1 :
Total Expenses: 103.50
Food: 40.75
*/


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Expense{
    public:
    string category;
    double amount;
    string date;
};
int main(){
    int n;
    cout<<"Enter the number of expenses : ";
    cin>>n;
    Expense expense[n];
    double totalexpense=0.0;
    for(int i=0;i<n;i++){
        cin>>expense[i].category;
        cin>>expense[i].amount;
        totalexpense+=expense[i].amount;
        cin>>expense[i].date;
    }
    string cat;
    cin>>cat;
    double catsum=0.0;
    for(int i=0;i<n;i++){
        if(expense[i].category==cat){
            catsum+=expense[i].amount;
        }
    }
    cout<<"Total expense: "<<fixed<<setprecision(2)<<totalexpense<<endl;
    cout<<cat<<" : "<<fixed<<setprecision(2)<<catsum<<endl;
    return 0;
}