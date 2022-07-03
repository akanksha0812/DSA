#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int a=x/y;
	    if(x<=y){
	        cout<<z<<endl;
	    }
	    else{
	        if(x%y==0){
	           cout<<a*z<<endl;
	        }
	        else{
	            cout<<(a+1)*z<<endl;
	        }
	    }
	}
	return 0;
}
