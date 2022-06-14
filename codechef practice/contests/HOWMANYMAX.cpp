#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
    while(t--){
        int n;
        cin>>n;
        char s[n-1];
        for(int i=0;i<n-1;i++){
            cin>>s[i];
        }
        int count=0;
        if(n-1==1){
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='1' && s[i-1]=='0'){
                count++;
            }
        }
        if(s[0]=='1'){
            count++;
        }
        if(s[n-2]=='0'){
            count++;
        }
        cout<<count<<endl;
    }
	return 0;
}