#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int count=0,length,p;
    int arr[1000];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    for(int i=0;i<4;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
        }
    cout<<count<<endl;
}