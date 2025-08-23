/*
Input 1 :
22
C
Output 1 :
The number is positive
The character is an alphabet
*/

#include<iostream>
#include<cctype>
using namespace std;
int main(){
    int n;
    char ch;
    cout<<"Enter a integer : ";
    cin>>n;
    cout<<"Enter a characher : ";
    cin>>ch;
    void* ptr1=&n;
    void* ptr2=&ch;
    if(*(int*)ptr1>0) cout<<"Number is a positive number."<<endl;
    else if(*(int*)ptr1<0) cout<<"Number is a negative number."<<endl;
    else cout<<"Number is zero."<<endl;
    if(isalpha(*(char*)ptr2)) cout<<"Its a Alphabet.";
    else if(isdigit(*(char*)ptr2)) cout<<"Its a number.";
    else cout<<"Its not a alnum.";
return 0;
}