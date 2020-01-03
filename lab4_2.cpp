#include<iostream>

using namespace std;
double findDistance(double a,double b,double c){
  double S;
S=(b*c)+(0.5*a*(c*c));
return S;
}

int main(){
  double a,b,c,S;
  cout<<"Enter u(m/s) = ";
  cin>>b;
  cout<<"Enter t(s) = ";
  cin>>c;
  cout<<"Enter a(m/(s^2)) = ";
  cin>>a;
  cout<<"result = "<<findDistance(a,b,c);


  return 0;
}
