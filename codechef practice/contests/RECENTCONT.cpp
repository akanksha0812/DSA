#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int count1=0;
	    int count2=0;
	    string s;
	 
	    for(int i=0;i<n;i++){
	        cin>>s;
	    if(s=="START38"){
	        count1++;
	    }
	    else if(s=="LTIME108"){
	        count2++;
	    }}
	    cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}
