#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x*100==y*10){
            cout<<"CLOTH"<<endl;
        }
        else if(x*100>y*10){
            cout<<"CLOTH"<<endl;
        }
        else{
            cout<<"DISPOSABLE"<<endl;
        }
    }}