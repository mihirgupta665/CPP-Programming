#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"The prime numbers between "<<a<<" and "<<b<<endl;
    for(int i=a;i<=b;i++){
        int c=0;
        for(int k=2;k<i;k++){
            if(i%k==0){
                c++;
            }
        k++;
        }
        if(c==0){
            cout<<i<<" is a prime number."<<endl;
        }
    }
}

