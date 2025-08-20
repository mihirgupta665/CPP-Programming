#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<". number : ";
        cin>>arr[i];
    }
    int ans=INT_MIN ;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k]; 
            }
            cout<<endl;
            ans=max(ans,sum);
        }
    }
    cout<<"Sum of largest subarray is : "<<ans<<endl;
    return 0;
}