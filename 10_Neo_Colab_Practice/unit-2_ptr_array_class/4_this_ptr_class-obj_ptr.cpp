/*
Input 1 :
10 20
Output 1 :
The values are not equal
*/

#include<iostream>
using namespace std;
class Myclass {
    public:
    int value;
    void setvalue(){
        cout<<"Enter the value of this object : ";
        cin>>this->value;
        return;
    }
    void compare(Myclass* other){
        if(this->value == other->value){
            cout<<"The values are equal";
        }
        else{
            cout<<"The values are unequal";
        }
        return;
    }
};
int main(){
    Myclass obj1, *ptr1;
    ptr1=&obj1;
    Myclass obj2, *ptr2;
    ptr2=&obj2;
    ptr1->setvalue();
    ptr2->setvalue();
    ptr1->compare(ptr2);
    return 0;  
}