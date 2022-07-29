#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size,k;
    cin>>size;
    cin>>k;
    int arr[1000];
    for(int i=1;i<size-1;i++){
        cin>>arr[i];
    }cout<<arr[k];
}