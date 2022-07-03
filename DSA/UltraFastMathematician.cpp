#include<iostream>
using namespace std;
int main(){
    int count=0 ;
    string s;
    string k;
    cin>>s;
    cin>>k;
    for (int i=0;i<s.size();i++){
        if(s[i]=='1' && k[i]=='0' || s[i]=='0' && k[i]=='1'){
            cout<<1;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}