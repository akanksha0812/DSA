#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        while(t--){
            if(s[i]=='B' and s[i+1]=='G'){
                swap(s[i],s[i+1]);
            }
        }
         cout<<s<<endl;
    }
    return 0;
}