#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int h,c,t;
        int q=7/10;
        cin>>h>>c>>t;
        if(h>50 && c<q  &&  t>5600){
            cout<<10<<endl;
        }
        else if(h>50 && c<q){
            cout<<9<<endl;
        }
        else if(c<q  &&  t>5600){
            cout<<8<<endl;
        }
        else if(h>50 && t>5600){
            cout<<7<<endl;
        }
        else if(h>50 || c<q  ||  t>5600){
            cout<<6<<endl;
        }
        else{
            cout<<5<<endl;
        }
    }}