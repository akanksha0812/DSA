#include<bits/stdc++.h>
using namespace std;
string reverseWord(string str);
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        cout<<reverseWord(s)<<endl;
    }
    return 0;
    }

string reverseWord(string str){
    int n=str.length();
    string q;
    for(int i=n-1;i>=0;i--){
        q=q + str[i];
    }
       return q;
  
}