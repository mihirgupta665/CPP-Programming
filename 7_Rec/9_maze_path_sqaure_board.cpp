#include<iostream>
using namespace std;
int path(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 0;
    }
    if(i>=n || j>=n){
        return 1;
    }
    return path(n,i+1,j) + path(n,i,j+1);
}
int main(){
    int n;
    cout<<"Enter the side of squareboard : ";
    path(n,0,0);
    return 0;
}