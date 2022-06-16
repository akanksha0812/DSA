#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    if(n%2!=0){
	        cout<<-1<<endl;
	    }
	    else{
	        for(int i=0;i<n;i++){
	            sum=sum+a[i];
	        }
	        if(sum==0){
	            cout<<0<<endl;
	        }
	        else if(sum>0){
	            cout<<sum/2<<endl;
	        }
	        else{
	            cout<<abs(sum/2)<<endl;
	        }
	    }
	}
	return 0;
}