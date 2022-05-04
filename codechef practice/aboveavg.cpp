#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,x;
        cin>>n>>m>>x;
        int y=x+1;
        int a=n*x;
        if(m!=x){
            cout<<a/y<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}