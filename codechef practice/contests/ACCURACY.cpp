#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int b=x/3;
	    if(x==0){
	        cout<<0<<endl;
	    }
	    else if(x%3==0){
	         cout<<0<<endl;
	    }
	    else{
	        int a=(b+1)*3;
	        int c=a-x;
	        cout<<c<<endl;
	    }
	   
	}
	return 0;
}
