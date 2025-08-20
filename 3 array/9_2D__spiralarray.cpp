#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the rows and columns of the array : "<<endl;
    cin>>a>>b;
    int arr[a][b];
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<"Enter the "<<i+1<<". number in array :";
            cin>>arr[i][j];
        }
    }
    int sr=0,sc=0;
    int er=a-1,ec=b-1;
    while(sr<=er && sc<=ec){
        for(int i=sc;i<=ec;i++){
            cout<<arr[sr][i];
        }
            sr++;
        for(int i=sr;i<=er;i++){
            cout<<arr[i][ec];
        }
            ec--;
        for(int i=ec;i>=0;i--){
            cout<<arr[er][i];
        }
            er--;
        for(int i=er;i>=er;i--){
            cout<<arr[i][sc];
        }
            sc++;
    }
}