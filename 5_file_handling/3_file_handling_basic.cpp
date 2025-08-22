/*
Input 1 :
10 22.34 HelloWorld!
Output 1 :
10 22.34 
HelloWorld!
Sum of integer and float: 32.34
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int setup(){
    ofstream out("text.txt");
    if(!out){
        cout<<"Unable to write.";
        return 1;
    }
    int inum;
    float fnum;
    char name[80];
    cout<<"Enter a interger, a float and a string : ";
    cin>>inum>>fnum>>name;
    out<<inum<<" "<<fnum<<"\n";
    out<<name;
    out.close();
    return 0;
}
int main(){
    int i;
    float f;
    char ch[80];
    if(setup()!=0){
        cout<<"Unable to setup"<<endl;
        return 1;
    }
    ifstream in("text.txt");
    if(!in){
        cout<<"unable to read";
        return 1;
    }
    in>>i;
    in>>f;
    in>>ch;
    cout<<i<<" "<<f<<endl;
    cout<<ch<<endl;
    cout<<"Sum of integer and float : "<<i+f<<endl;
    in.close();
    return 0;
    
}