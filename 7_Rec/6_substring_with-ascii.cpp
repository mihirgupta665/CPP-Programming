#include<iostream>
#include<string>
using namespace std;
void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int code=s[0];
    string ros=s.substr(1);
    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,ans+to_string(code));
}
int main(){
    string s;
    cout<<"Enter the string s : ";
    cin>>s;
    substring(s,"");
}