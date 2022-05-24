#include<iostream>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        int x,y;
        cin>>x>>y;
        if(x>y){
            cout<<"A"<<endl;
        }
        else if(y>x){
            cout<<"B"<<endl;
        }
    }
    return 0;
}