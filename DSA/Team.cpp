#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n--){
        int p,v,t;
        cin>>p>>v>>t;
        if((p==1&&v==1)||(v==1&&t==1)||(t==1&&p==1)){
            sum++;
            continue;
        }
    } cout<<sum<<endl;
}