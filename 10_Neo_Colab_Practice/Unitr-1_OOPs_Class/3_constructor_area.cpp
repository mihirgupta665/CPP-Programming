#include<iostream>
using namespace std;
class rectangle {
    int len,brth;
    public:
    rectangle(int l,int b) : len(l), brth(b) {}
    int area(){
        return len*brth;
    }
    int perimeter(){
        return 2*(len+brth);
    }
};
int main(){
    int len,brth;
    cout<<"Enter the length and breadth : ";
    cin >> len >> brth;
    rectangle rect(len,brth);
    cout<<"Area: "<<rect.area()<<endl;
    cout<<"Perimeter: "<<rect.perimeter()<<endl;
    return 0;
}
