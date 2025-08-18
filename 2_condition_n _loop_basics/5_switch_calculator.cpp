#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cin>>n1>>n2;
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<"Addition of "<< n1 <<" and "<< n2 <<" is : "<<n1+n2<<endl;
            break;
        case '-': 
            cout<<"subtraction of "<< n1 <<" and "<< n2 <<" is : "<<n1-n2<<endl;
            break;
        case '/': 
            cout<< "Division of "<< n1 <<" and "<< n2 <<" is : "<<n1/n2<<endl;
            break;
        case '*': 
            cout<<"Multiplication of "<< n1 <<" and "<< n2 <<" is : "<<n1*n2<<endl;
            break;
        default:
            cout<<"I am just a simple calculator."<<endl;
    }
    return 0;
}