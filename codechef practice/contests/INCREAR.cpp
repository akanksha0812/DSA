#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
        int diff;
        if(x>y){
            diff=x-y;
            if(diff%2==0){
                cout<<diff/2<<endl;
            }
            else{
                cout<<(diff/2)+2<<endl;
            }
        }
        else if(x<y){
            diff=y-x;
            cout<<diff<<endl;
        }
        else{
            cout<<0<<endl;
        }
	}
	return 0;
}