#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int a[n];
	int b[n];
	
	for(int i=2;i<=n-1;i++){
	    cin>>a[i];
	    b[i]=a[i];
	}
	for(int i=2;i<n-1;i++){
	    if((b[i]-b[i-1])==2*(b[i+1]-b[i]) || 2*(b[i]-b[i-1])==(b[i+1]-b[i]) ){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
}