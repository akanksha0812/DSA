#include <iostream>
#include <vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int q;
	    cin>>q;
	    string s[q];
	    for(int i=0;i<q;i++){
	        if(q%4==0){
	            if(i%4==0 || (i+1)%4==0){
	                cout<<"1";
	            }
	            else{
	                cout<<"0";
	            }
	        }
	        else{
	            if(i==0 || i==q-1){
	                cout<<"0";
	            }
	            else{
	                cout<<"1";
	            }
	        }
	    }
	    cout<<endl;
	}
	return 0;
}