#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int count =0;
	   // bool ans=false;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
	            count++;
	            if(count>2){
	                cout<<"Happy"<<endl;
	                break;
	            }
	        }
	    else{
	        count=0;
	    }
	    }
	    if(count<3){
	        cout<<"sad"<<endl;
	    }
	}
	return 0;
}