#include <iostream>
#include<math.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int p1,p2,q1,q2;
	    cin>>p1>>p2>>q1>>q2;
	    if(max(p1,p2)>max(q1,q2)){
	        cout<<"Q"<<endl;
	    }
	    else if(max(q1,q2)>max(p1,p2)){
	        cout<<"P"<<endl;
	    }
	    else if(max(p1,p2)==max(q1,q2)){
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
