#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    string d=a+b;
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    if(c==d){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}