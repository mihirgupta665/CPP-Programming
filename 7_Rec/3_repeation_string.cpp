#include<iostream>
#include<string>
using namespace std;
string norepstr(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=norepstr(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    cout<<norepstr(str)<<endl;
}