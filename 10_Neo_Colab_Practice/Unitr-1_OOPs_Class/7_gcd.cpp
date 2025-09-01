#include<iostream>
using namespace std;
inline int gcd(int a, int b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cout<<"Enter two number : ";
    cin>>a>>b;
    int result=gcd(a,b);
    cout<<"GCD of "<<a<<" and "<<b<<" is : "<<result<<endl;
    return 0;
}