#include<iostream>
using namespace std;
int moves(int s, int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=moves(s+i,e);
    }
    return count;
}
int main(){
    int end;
    cout<<"Enter the end point : ";
    cin>>end;
    cout<<moves(0,end)<<endl;
    return 0;
}