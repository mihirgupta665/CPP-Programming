#include<iostream>
using namespace std;
int firstocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);
    if(restarray!=-1){
    return restarray;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter a the length of the array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<". number : ";
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key of the array : ";
    cin>>key;
    cout<<firstocc(arr,n,0,key)<<endl;
    cout<<lastocc(arr,n,0,key)<<endl;
    return 0;
}