#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<". number of array : ";
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        counter++;
    }
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}