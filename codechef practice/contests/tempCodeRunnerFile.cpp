#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int x,y;
	    cin>>x>>y;
        int count=0;
	    while(x<y){
	        count++;
	        x+=8;
	    }
	    cout<<count<<endl;
    }
	return 0;
}