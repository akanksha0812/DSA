#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
    	int w,x,y,z;
    	cin>>w>>x>>y>>z;
    	if(w+y*z>x){
    	    cout<<"Overflow"<<endl;
    	}
    	else if(w+y*z<x){
    	    cout<<"Unfilled"<<endl;
    	}
    	else{
    	    cout<<"Filled"<<endl;
    	}
	}
	return 0;
}