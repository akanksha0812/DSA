#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,l;
    string s;;
    cin>>s;
    l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='.')
        cout<<"0";
         if((s[i]=='-')&&(s[i+1]=='.'))
         {
           cout<<"1";
           i++;
         }

        if((s[i]=='-')&&(s[i+1]=='-'))

        {
            cout<<"2";
            i++;
        }
    }
    cout<<endl;
}
