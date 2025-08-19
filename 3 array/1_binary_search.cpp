#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of array : "<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cout<<"Enter "<<i+1<<". number: "<<endl;
        cin>>a[i];
    }
    cout<<"Enter the element to search : "<<endl;
    int ele;
    cin>>ele;
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==ele) 
        {
            cout<<"Element "<<ele<<"found at : "<<mid<<endl;
            break;
        }
        else if(a[mid]<ele){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return 0;
}