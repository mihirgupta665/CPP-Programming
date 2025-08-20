#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<". number of the array : ";
        cin>>arr[i];
    }
    int S;
    cout<<"Enter the sum to be find : ";
    cin>>S;
    int i=0,j=0,st=0,en=0,sum=0;
    while(j<n && sum+arr[j]<=S){
        sum+=arr[j];
        j++;
    }
    if(sum==S){
        cout<<"The sum is from "<<i+1<<" to"<<j<<endl;
        return 0;
    }
    while(j<n){
        sum+=arr[j];
        while(sum>S){
            sum-=arr[i];
            i++;
        }
        if(sum==S){
            st=i+1;
            en=j+1;
            // cout<<"The sum is from "<<st<<" to"<<en<<endl;
            break;
        }
        j++;
    }
    cout<<"The sum is from "<<st<<" to "<<en<<endl;

    return 0;
}