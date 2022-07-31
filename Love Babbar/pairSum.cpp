#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[j]+arr[j+1]==k){
                cout<<'('<<arr[j]<<','<<arr[j+1]<<')'<<endl;
                cout<<'('<<j<<','<<j+1<<')';
                break;
            }else{
                cout<<0<<endl;
                break;
            }
        }
        break;
    }
}