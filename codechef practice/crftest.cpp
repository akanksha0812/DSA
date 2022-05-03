#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        set<int>distinct;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            distinct.insert(arr[i]);
        }
            cout<<distinct.size()<<endl;
        
    }}