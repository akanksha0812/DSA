#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int total=x*5+y*10;
	    int chocolates=total/z;
	    cout<<chocolates<<endl;
	}
	return 0;
}
