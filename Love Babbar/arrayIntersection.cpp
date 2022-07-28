#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void Intersection(int a[],int b[],int size1,int size2){

    for(int i=0;i<size1;i++){
        for(int j=0; j<size2; j++){
                if(a[i]==b[j]){
                    cout<<a[i]<<" ";
                }
        }
    }

}
int main(){
    int size1,size2;
    cin>>size1;
    cin>>size2;
    int a[1000],b[1000];
    for(int i=0;i<size1;i++){
        cin>>a[i];
    }
    for(int j=0;j<size2;j++){
        cin>>b[j];
    }
    Intersection(a, b, size1, size2 );

}