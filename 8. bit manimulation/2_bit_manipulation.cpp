#include<iostream>
using namespace std;
int getbit(int num,int pos){
    return(num & (1<<pos))!=0;
}
int setbit(int num,int pos){
    return (num | (1<<pos));
}
int clearbit(int num,int pos){
    return (num & ~(1<<pos));
}
int update(int num,int pos,int value){
    num=num & ~(1<<pos);
    return num | (value<<pos);
}
int main(){
    int num,pos;
    cout<<"Enter the binary number : "<<endl;
    cin>>num;
    cout<<"Enter the position : "<<endl;
    cin>>pos;
    cout<<"Set bits: "<<setbit(num,pos)<<endl;
    cout<<"Get Bit : "<<getbit(num,pos)<<endl;
    cout<<"Clear Bit: "<<clearbit(num,pos)<<endl;
    int value;
    cout<<"Enter the value to update : "<<endl;
    cin>>value; 
    cout<<update(num,pos,value)<<endl;
    return 0;
}