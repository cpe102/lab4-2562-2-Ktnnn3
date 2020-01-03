#include<iostream>
#include<cmath>
using namespace std;
 double threex(double x){
     double first = 3*x*x*x;
     return(first);
 }
double twopow(double x){
    double second = pow(2,(2*x+1));
    return(second);
}
double sq(double x){
    double thd = sqrt(((x*x)+1));
    return(thd);
    }
int main(){
    double x,sum=0;

    cin>>x;
    sum=threex(x)+(2*2.71828)+twopow(x)+sq(x);
    cout<<sum;
    return 0;
}
