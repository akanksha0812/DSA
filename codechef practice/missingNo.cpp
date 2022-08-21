#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
        	int n;
        	cin>>n;
        	int arr[1000];
        	for(int i=0;i<n-1;i++){
        	    cin>>arr[i];
        	}
        	int total=(n)*(n+1)/2;
        	for(int i=0;i<n-1;i++){
        	    total=total-arr[i];
        	}
        	cout<<total<<endl;
	}

	return 0;
}