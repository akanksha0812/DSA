#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,p;
        cin>>n>>x>>p;
        int q=n-x;
        int r=x*3;
        if(r+q*(-1)>=p){
            cout<<"PASS"<<endl;
        }
        else{
            cout<<"FAIL"<<endl;
        }

    }
}