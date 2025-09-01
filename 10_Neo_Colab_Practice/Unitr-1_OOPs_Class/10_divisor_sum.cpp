/*
For n = 4:
Divisors of 1: 1 (Sum: 1)
Divisors of 2: 1, 2 (Sum: 3)
Divisors of 3: 1, 3 (Sum: 4)
Divisors of 4: 1, 2, 4 (Sum: 7)
The total sum of all divisors is 1 +3 + 4 + 7 = 15. Thus, the output is 15.
*/
#include<iostream>
using namespace std;
int divisor_sum(int& n){   // call by reference
    int sum=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                if(i/j==j){
                    sum+=j;
                }
                else{
                    sum+= j + i/j;
                }
            }
        }
    }
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number for its divisor sum : ";
    cin>>n;
    int sum=divisor_sum(n);
    cout<<"The divisior sum of "<<n<<" is : "<<sum<<endl;
    return 0;
}
