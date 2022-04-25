#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int a=x*3;
        int b=y*2;
        cout<<min(a,b)<<endl;
    }
    }