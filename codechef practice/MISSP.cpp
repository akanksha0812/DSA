#include <iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    for(int i=0;i<n;i+=2){
	       if(a[i]!=a[i+1]){
	           cout<<a[i]<<endl;
	           break;
	       }
	   }
	}
    return 0;
}