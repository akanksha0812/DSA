#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    int c=abs(a-b);
	    if(a==0 || b==0 || a%3==0 || b%3==0){
	        cout<<0<<endl;
	    }
	    else if(c%3==0 && a!=0 && b!=0){
	        cout<<"1"<<endl;
	    }
	    else{
	        cout<<"2"<<endl;
	    }
	}
	return 0;
}