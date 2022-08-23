#include<bits/stdc++.h>
using namespace std;
int main(){
    string p;
    cin>>p;
    for (int i=0;i<p.size();i++){
        if(p[i]=='H' || p[i]=='Q'|| p[i]=='9' || p[i]=='+'){
            cout<<"YES"<<endl;
            break;
        }else{
            cout<<"NO"<<endl;
            break;
        }
    }
   
}