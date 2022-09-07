#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int z=((3*x)-(2*y));
	    cout<<min(z,y)<<" "<<y<<" "<<max(z,y)<<endl;
	}
	return 0;
}