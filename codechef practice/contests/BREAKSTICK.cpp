#include <iostream>
using namespace std;
int main() {
    int T;
    cin>>T;
    while(T--){
        int n,x;
        cin>>n>>x;
        if(n%2==0){
            cout<<"Yes"<<endl;
        }
        else{
            if(x%2==0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}