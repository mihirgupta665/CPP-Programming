#include<iostream>
using namespace std;
void dec(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    return dec(n-1);
}
void asc(int n){
    if(n == 0){
        return;
    }
    asc(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cout<<"Enter n is number : ";
    cin>>n;
    dec(n);
    asc(n);
    return 0;
}