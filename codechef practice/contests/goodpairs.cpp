#include <iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        map<pair<int,int>,int> mpp;
        long long ans=0;
        for(int i=0;i<n;i++){
            ans=ans+ mpp[{a[i],b[i]}];
            mpp[{b[i],a[i]}]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}