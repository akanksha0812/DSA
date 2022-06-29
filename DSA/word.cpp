#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int upper=0,lower=0;
    string s;
    cin>>s;
    int length = s.size();
    for(int i=0;i<length;i++){
        if(s[i]>='A' &&s[i]<='Z')
                upper++;
        else if(s[i]>='a' && s[i]<='z') 
                lower++;
    }
    if(upper>lower){
        transform(s.begin(),s.end(),s.begin(), ::toupper);
        cout<<s<<endl;
    }
    else if(upper<lower){
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
    else{
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        cout<<s<<endl;
    }
}