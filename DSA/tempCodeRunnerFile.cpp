#include<iostream>
using namespace std;
int main(){
    int count=0,length,p;
    int arr[1000];
    for(int i=0;i<4;i++){
        cin>>arr[i];
    }
    for(int i=0;i<4;i++){
            if(arr[i]==arr[i+1]){
                count++;
                length=sizeof(arr)/sizeof(arr[0]);
                p=length-count;
            }
        }
    cout<<length-p<<endl;
}