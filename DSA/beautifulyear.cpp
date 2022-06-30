#include<iostream>
using namespace std;
int main(){
    int a,b,c,d,x,answer;
    cin>>x;
    while(1){
        x++;
        answer=x;
        a=x%10;
        x=x/10;
         b=x%10;
        x=x/10;
         c=x%10;
        x=x/10;
         d=x%10;
        x=x/10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout<<answer<<endl;
            break;
        }
            x=answer;
    }
    return 0;
}