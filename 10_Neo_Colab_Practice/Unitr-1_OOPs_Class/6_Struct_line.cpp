#include<iostream>
#include<cmath>
// #include<math.h>
#include<iomanip>
using namespace std;
struct line{
    int x1,y1,x2,y2;
};
int main(){
    line l;
    cout<<"Enter the co-ordinates of First starting point : ";
    cin>>l.x1>>l.y1;
    cout<<"Enter the co-ordinates of Second ending point : ";
    cin>>l.x2>>l.y2;
    float dist;
    dist=sqrt(pow((l.x2-l.x1),2) + pow((l.y2-l.y1),2));
    float midx,midy;
    midx=(l.x2+l.x1)/2.0;
    midy=(l.y2+l.y1)/2.0;
    cout<<"distance : "<<fixed<<setprecision(2)<<dist<<endl;
    cout<<"midpoint : "<<fixed<<setprecision(2)<<midx<<","<<midy<<endl;
    return 0;
}