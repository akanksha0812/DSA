#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        int a=(10/100)*x;
        int c=x-a;
        int b=x-100;
        if(c>b){
            cout<<100<<endl;
        }
        else{
            cout<<a<<endl;
        }
    }
    }