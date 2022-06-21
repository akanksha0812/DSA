#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int a=0,b=0;
	    if(x%10!=0){
	        a=(x+10)/10;
	    }
	    else{
	        a=((x+10)/10)-1;
	    }
	    if(y%10!=0){
	        b=(y+10)/10;
	    }
	    else{
	        b=((y+10)/10)-1;
	    }
	    cout<<abs(a-b)<<endl;
	}
	return 0;
}