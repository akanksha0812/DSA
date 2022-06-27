#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int X=0,Y=0,Z=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        X+=a;
        Y+=b;
        Z+=c; }
        if(X==0 && Y==0 && Z==0){
            cout<<"Yes"<<endl;}
        else{
            cout<<"No"<<endl;}
}