#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;

	    cin>>x>>y>>z;
	      int a=(z-y)/x;
	    if(x+y<=z){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
