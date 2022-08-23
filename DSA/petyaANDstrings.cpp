#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string a,b;
int main(){
    cin>>a>>b;
    //transform(a.begin(), a.end(), a.begin(), ::toupper);
    //transform(a.begin(), a.end(), a.begin(), ::toupper);
    for(int i=0;i<a.size();i++){
        if(a[i]>=97){
            a[i]-=32;
        }
        if(b[i]>=97){
            b[i]-=32;
        }
    }
    if(a<b){
        cout<<-1<<endl;
    }else if(b<a){
        cout<<1<<endl;
    }else{
        cout<<0<<endl;
    }

}