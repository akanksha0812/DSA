#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c;
    int d,p,nl,np;
    cin>>n>>k>>l>>c;
    cin>>d>>p>>nl>>np;
    int one=k*l;
    int one1=one/nl;
    int two=c*d;
    int two2=p/np;
    int final=min({one1,two,two2})/n;
    cout<<final<<endl;
}