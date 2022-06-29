#include<bits/stdc++.h>
using namespace std;
int main(){
    int l,i,n;
    char s[10000];
    gets(s);
    l=strlen(s);
    for( i=0;i<l;i++){
        if(s[i]=='.')
            cout<<'0';
                if((s[i]=='-') && (s[i]=='.'))
                {
                    cout<<'1';
                    i++;
                }
                if((s[i]=='-') && (s[i]=='-'))
                {
                    cout<<'2';
                    i++;
                }
    }
    cout<<endl;
}