#include<iostream>
using namespace std;
int kadance(int arr[],int n){
    int currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        if(currentsum<0) currentsum=0;
    }
}
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<". number of the array : ";
        cin>>arr[n];
    }  
    int nonwrapsum=kadance(arr,n);
    int totalsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapsum= totalsum - kadance(arr,n);
    cout<<max(wrapsum,nonwrapsum)<<endl;
return 0;
}