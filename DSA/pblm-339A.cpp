#include<iostream>
using namespace std;
int main(){
 string s;
 cin>>s;
 int n=s.size();
 for(int i=0;i<n-1;i+=2){
    for (int j=0;j<n-i-1;j+=2){
        if(s[j]>s[j+2]){
            swap(s[j],s[j+2]);
        }
    }
 }
 cout<<s<<endl;
}