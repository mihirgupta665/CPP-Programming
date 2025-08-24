/*
Input 1 :
4
101
25.5
102
20.8
103
15.2
104
18.9
Output 1 :
103
*/

#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;
class WeatherForecast{
    private:
    vector<int> countrycode;
    vector<double> temperature;
    int n;
    public:
    void initialize(int num){
        n=num;
        countrycode.resize(n);
        temperature.resize(n);
    }
    int i=0;
    void settemperature(int cc,double temp){
        countrycode[i]=cc;
        temperature[i]=temp;
        i++;
    }
    double coldest(){
        double cold=temperature[0];
        int id=countrycode[0];
        int ans=0;
        for(int j=1;j<i;j++){
            if(cold>temperature[j]){
                cold=temperature[j];
                id=countrycode[j];
                ans=j;
            }
        }
        return ans;
    }
    void display(int ans){
        cout<<"Coldest Country Code of : "<<countrycode[ans]<<endl;
        cout<<"Coldest Country Temperature of : "<<temperature[ans]<<endl;
    }
};
int main(){
    WeatherForecast weather;
    int num;
    cout<<"Enter the total number of cities : ";
    cin>>num;
    weather.initialize(num);
    for(int i=0;i<num;i++){
        int code;
        cin>>code;
        double celsius;
        cin>>celsius;
        weather.settemperature(code,celsius);
    }
    int id =weather.coldest();
    weather.display(id);
    return 0;  
}