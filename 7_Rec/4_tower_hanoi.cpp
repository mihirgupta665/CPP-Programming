#include<iostream>
using namespace std;
void hanoi(int n, char start,char dest,char helper){
    if(n==0){
        return;
    }
    hanoi(n-1,start,helper,dest);
    cout<<"Move from "<<start<<" to "<<dest<<endl;
    hanoi(n-1,helper,dest,start);
}
int main(){
    char start='A',helper='B',dest='C';
    int n;
    cout<<"Enter the number of beats : ";
    cin>>n;
    hanoi(n,start,dest,helper);
}