#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long n,m,sum=0;
	    cin>>n>>m;
	    long a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	        if(m/2>=a[i]){
	            sum=abs(m-a[i])+sum;
	            
	        }else{
	            sum=abs(1-a[i])+sum;
	            
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}