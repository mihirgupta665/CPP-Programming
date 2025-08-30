#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);

    string str1(5,'n');
    str1.clear();
    str.compare(str1);
    if(str.empty()==0){
        cout<<"Empty string"<<endl;
    }
    cout<<str1<<endl;
    string str2="sabshabfEFDDSJFB jdsnvjsd";
    str2.erase(2,3);
    cout<<str2<<endl;
    cout<<str2.find("EFDD")<<endl;
    str2.insert(2,"lol");
    cout<<str2.substr(4,6)<<endl; 
    string num="7898";
    int x =stoi(num);
    cout<<to_string(x)+"2"<<endl;
    sort(str2.begin(),str2.end());
    cout<<str2<<endl;
    string s="nfsajnaADFHBDS";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    string s1="213256";
    sort(s1.begin(),s1.end(),greater<int>());
    return 0;
}