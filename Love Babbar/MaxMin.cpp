#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int minEle(int arr[], int size){
    int mini = INT_MAX;
    for(int i=0;i<size;i++){
        mini= min(mini,arr[i]);
    }
    return mini;
    // for(int i =0 ; i<n; i++){
    //     if(arr[i]<min){
    //         min=arr[i];
    //     }
    // }
    // return min;
}
int maxEle(int arr[], int size){
    int maxi = INT_MIN;
    for(int i =0 ; i<size; i++){
        maxi=max(maxi,arr[i]);
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
    // }
    // return max;
}
return maxi;
}
int main(){
    int size,i;
    cin>>size;
    int arr[1000];
    for(int i=0 ; i<size;i++){
        cin>>arr[i];
    }
    cout<<"Minimum element is :"<<minEle(arr,size)<<endl;
     cout<<"Minimum element is :"<<maxEle(arr,size)<<endl;
}