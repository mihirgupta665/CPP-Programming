#include<iostream>
using namespace std;
class Rectangle{
    private:
    static int count;
    int length,width;
    public:
    Rectangle(){
        count++;
    }
    static int getcount(){
        return count;
    }
    void setDimensions(int l,int w){
        length=l;
        width=w;
    }
    int getArea(){
        return length*width;
    }
};
int Rectangle::count = 0;
int main(){
    int n;
    cin>>n;
    Rectangle *rect= new Rectangle[n];
    for(int i=0;i<n;i++){
        int l,w;
        cin>>l>>w;
        rect[i].setDimensions(l,w);
    }
    cout<<"Total number of rectangle: "<<Rectangle::getcount()<<endl;
    for(int i=0;i<n;i++){
        cout<<"Area of rectangle "<<i+1<<": "<<rect[i].getArea()<<endl;
    }
    delete[] rect;
    return 0;
}
