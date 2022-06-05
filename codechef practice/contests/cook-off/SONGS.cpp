#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n>>x;
        int playtime=3*x;
        int ans=n/playtime;
        cout<<ans<<endl;
    }
    return 0;
}