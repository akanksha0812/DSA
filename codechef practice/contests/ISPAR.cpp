#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    long long int n,k;
        cin>>n>>k;
        if(k==1){
            if(n%2==0){
                cout<<"EVEN"<<endl;
            }
            else{
                cout<<"ODD"<<endl;
            }
        }
        else if(k==2){
            cout<<"ODD"<<endl;
        }
        else
        {
            cout<<"EVEN"<<endl;
        }
	}
	return 0;
}