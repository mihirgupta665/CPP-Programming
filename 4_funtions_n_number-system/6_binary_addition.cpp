#include<iostream>
using namespace std;
int reverse(int n){
    int x=0;
    while(n>0){
        int k=n%10;
        x=x*10+k;
        n/=10;
    }
    return x;
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans=0,pc=0;
    while(a>0 && b>0){
        if(a%2==0 && b%2==0){
            ans=ans*10+pc;
            pc=0;
        }
        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0) ){
            if(pc==1){
                ans=ans*10+0;
                pc=1;
            }
            else{
                ans=ans*10+1;
                pc=0;
            }
        }
        else{
            ans=ans*10+pc;
            pc=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0){
        if(pc==1){
            ans=ans*10+0;
            pc=1;
        }
        else{
            ans=ans*10+1;
            pc=0;
        }
        a/=10;
    }
    while(b>0){
        if(pc==1){
            ans=ans*10+0;
            pc=1;
        }
        else{
            ans=ans*10+1;
            pc=0;
        }
        b/=10;
    }
    if(pc==1){
        ans=ans*10+1;
        pc=0;
    }
    int answer=reverse(ans);
    cout<<answer<<endl;
    return 0;
}