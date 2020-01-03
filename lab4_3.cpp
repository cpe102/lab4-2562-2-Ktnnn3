#include<iostream>
using namespace std;
int findDivisor(int i){
    int y=2;
    while(y<=i){
        if(i%y==0){
            return y;
        }else{
            y++;
        }
    }

}
int main(){
    int i,y;
    cout<<"Enter = ";
    cin>>i;
    cout<<findDivisor(i);
}
