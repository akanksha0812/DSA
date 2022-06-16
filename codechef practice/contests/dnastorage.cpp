#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    string s;
	    cin>>s;
	    string ans="";
	        for(int i=0;i<k;i=i+2){
	        if(s[i]=='0' && s[i+1]=='0'){
	            ans=ans+"A";
	        }
	        else if(s[i]=='0' && s[i+1]=='1'){
	           ans=ans+"T";
	        }
	        else if(s[i]=='1' && s[i+1]=='0'){
	            ans=ans+"C";
	        }
	        else if(s[i]=='1' && s[i+1]=='1'){
                ans=ans+"G";
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}
