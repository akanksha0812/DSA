#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=100;i++){
        cin>>arr[i];
        int a=*max_element(arr, arr + n);
        int b=*min_element(arr,arr + n);
        
    }
}