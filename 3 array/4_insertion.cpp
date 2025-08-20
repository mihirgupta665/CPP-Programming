#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<". number of array : ";
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    cout<<"The correct order for the given array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
