#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3,r4;
	    cin>>r1>>r2>>r3>>r4;
	    if(r1==1||r2==1||r3==1||r4==1){
	        cout<<"OUT"<<endl;
	    }else{
	        cout<<"IN"<<endl;
	    }
	}
	return 0;
}