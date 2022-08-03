#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;
    for(int i=0;i<s.length()-1;i++){
        for(int j=i+1;j<s.length();j++){
            if(s[i]==s[j]){
                count++;
                break;
            }
        }
    }
    int ans =s.length()-count;        
        if(ans % 2 == 0){
            cout<<"CHAT WITH HER!"<<endl;
        }else{
            cout<<"IGNORE HIM!"<<endl;
        }
        return 0;
    }
    
