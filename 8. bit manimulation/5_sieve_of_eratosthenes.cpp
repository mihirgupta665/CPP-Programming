// To print the smallest prime factor of a number.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number for its smallest prime factor : ";
    cin>>n;
    int arr[100]={0};
    for(int i=2;i<=n;i++){
        arr[i]=i;
    }
    for(int i=2;i<=n;i++){
        if(arr[i]==i){
            for(int j =i*i;j<=n;j+=i){
                if(arr[j]==j){
                arr[j]=i;
                }
            }
        }
    }
    while(n!=1){
        cout<<arr[n]<<"  ";
        n=n/arr[n];
    }
}