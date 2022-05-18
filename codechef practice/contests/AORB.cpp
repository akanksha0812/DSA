#include <iostream>
#include<cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int p=500-x*2;
	    int q=1000-(x+y)*4;
	    int r=1000-y*4;
	    int s=500-(x+y)*2;
	    if(p+q==r+s){
	    cout<<p+q<<endl;
	}
	    else{
	        cout<<max(p+q,r+s)<<endl;
	    }
	}
	
	return 0;
}
