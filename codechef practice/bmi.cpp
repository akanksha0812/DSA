#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int M,H;
        cin>>M>>H;
        int BMI=M/(H*H);
        if(BMI<=18){
            cout<<1<<endl;
        }
        else if(19<=BMI && BMI<=24){
            cout<<2<<endl;
        }
        else if(25<=BMI && BMI<=29){
            cout<<3<<endl;
        }
        else if(BMI>=30){
            cout<<4<<endl;
        }
    }}
