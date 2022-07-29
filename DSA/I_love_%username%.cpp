#include<iostream>
using namespace std;
int main(){
    int n,best,worst,count=0;
    cin>>n;
    int arr[1000];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    if(arr[0]<arr[1]){
        count++;
        best=arr[1];
        worst=arr[0];
    }
    else if(arr[0]>arr[1]){
        count++;
        best=arr[0];
        worst=arr[1];
    }
    for(int i=2;i<n;i++){
        if(arr[i]>best){
            count++;
            best=arr[i];
        }
        else if(arr[i]<worst){
            count++;
            worst=arr[i];
        }
    } cout<<count<<endl;
}