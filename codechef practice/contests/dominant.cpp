#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int Na,Nb,Nc;
	    cin>>Na>>Nb>>Nc;
	    if(Na>Nb+Nc || Nb>Na+Nc || Nc>Nb+Na){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
