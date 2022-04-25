#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
           int X,Y,Z;
    cin>>X>>Y>>Z;
    if(Z*2>=Y-X){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    } 
    }
}