#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=x/10;
        int c=x-a;
        int b=x-100;
        cout<<max(a,100)<<endl;
    }
    }