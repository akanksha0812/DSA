#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int a=x*z;
        int b=y*z;
        cout<<a-b<<endl;
    }
    return 0;
}