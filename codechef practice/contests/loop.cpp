#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,m;       
        cin>>a>>b>>m;
        int half=m/2;
        int diff;
        if(a>b){
            diff=a-b;
        }
        else if(b>a){
            diff=b-a;
        }
        if(diff<=half){
            cout<<diff<<endl;
        }
        else{
            cout<<m-diff<<endl;
        }
    }
    return 0;
}