#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e;
	    cin>>a>>b>>c>>d>>e;
	    if((b-a)>max(c*e,d*e) || (b-a)<min(c*e,d*e))
	        cout<<0<<endl;
	    else
	        cout<<1<<endl;
	}
	return 0;
}