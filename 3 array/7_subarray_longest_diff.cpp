#include<iostream>
#include<climits>
using namespace std;
int main(){
   int n;
   cout<<"Enter the length of array : "<<endl;
   cin>>n;
   int arr[n+1];
   arr[n]=INT_MIN;
   for(int i=0;i<n;i++){
    cout<<"Enter the "<<i+1<<". number : ";
    cin>>arr[i];
   }
   int pd=arr[1]-arr[0];
   int j=2,current=2,ans=2;
   while(j<n){
        if(pd==arr[j+1]-arr[j]){
            current++;
        }
        else{
            pd=arr[j+1]-arr[j];
            current=2;
        }
        ans=max(ans,current);
        j++;
   }
   cout<<"Highest same difference sequence is : "<<ans;
   return 0;
}