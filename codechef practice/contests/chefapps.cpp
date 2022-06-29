#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int s,x,y,z;
	    cin>>s>>x>>y>>z;
	    int a=s-(x+y);
	    int b=s-x;
	    int c=s-y;
	    if((x+y)<s && a>=z ){
	        cout<<0<<endl;
	    }
	    else{
	        if(b>=z){
	            cout<<1<<endl;}
	        else if(c>=z){
	                cout<<1<<endl;}
	        else{
	            cout<<2<<endl;
	        }
	    }}
	return 0;
}
