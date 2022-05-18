#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=1;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='c' || s[i]=='g' || s[i]=='l' ||s[i]=='r'){
                ans=(ans*2)%1000000007;
            }
        }
        cout<<ans%1000000007<<endl;
    }
    return 0;
}