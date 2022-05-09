#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int A,B,C;
	    int P,Q,R;
	    cin>>A>>B>>C;
	    cin>>P>>Q>>R;
	    int maxdiff=max({P-A,Q-B,R-C});
	    int a=A+B+C+maxdiff;
	    int b=(P+Q+R)/2;
	    if(a>b){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}