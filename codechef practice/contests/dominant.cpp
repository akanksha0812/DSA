#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int na,nb,nc;
	    cin>>na>>nb>>nc;
	    if(na>nc+nb || nb>na+nc ||nc>na+nb){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
