#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=1,ans=0;
    while(x<=n){
        x*=8;
    }
    x/=8;
    while(x>0){
        int ld=n/x;
        n=n-ld*x;
        x/=8;
        ans=ans*10+ld;
    }
    cout<<ans<<endl;
    return 0;
}
