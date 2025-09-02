#include<iostream>
#include<cctype>
using namespace std;
bool isvowel(char c){
    c=tolower(c);
    return(c== 'a' || c=='e' || c=='i' || c=='o' || c=='u');
}
int main(){
    char str[1000];
    char* ptr=str;
    char ch;
    while(true){
        cin>>ch;
        if(ch=='-'){
            char ch2;
            cin>>ch2;
            if(ch2=='1'){
                break;
            }
            else{
                *ptr++=ch;
                *ptr++=ch2;
            }
        }
        else{
        *ptr++=ch;
        }
    }
    *ptr='\0';
    char* ptr1=str;
    char** ptr2=&ptr1;
    int count=0;
    while(**ptr2!='\0'){
        if(isvowel(**ptr2)){
            count++;
        }
        (**ptr2)++;
    }
    cout<<"The count of vowel in string is : "<<count<<endl;
    return 0;
}