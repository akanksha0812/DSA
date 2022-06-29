#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int b[n];
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>b[i];
	        c=c+b[i];
	    }
	    if(c%2==0){
	       cout<<"Yes"<<endl;
	        }
	    else{
	       cout<<"No"<<endl;
	        }
	}
	return 0;
}
