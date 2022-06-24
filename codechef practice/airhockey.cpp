#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,temp=7;
	    cin>>a>>b;
	    if(a>b){
	        cout<<temp-a<<endl;
	    }
	    else{
	        cout<<temp-b<<endl;
	    }
	}
	return 0;
}