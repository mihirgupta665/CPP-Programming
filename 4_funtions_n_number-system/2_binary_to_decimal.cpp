#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1,ans=0;
    while(n>0){
        int k=n%10;
        ans+=k*x;
        x*=2;
        n/=10;
    }
    cout<<ans<<endl;
    return 0;
}