#include <iostream>
using namespace std;

int main() {
    char a,b;
    cin>>a>>b;
    if(a=='R' || b=='R'){
        cout<<"R\n";
    }
    else if(a=='B' && b=='G' || a=='G' && b=='B' || a=='B' && b=='B'){
        cout<<"B\n";
    }
    else if(a=='G' && b=='G'){
        cout<<"G\n";
    }
	
	return 0;
}
