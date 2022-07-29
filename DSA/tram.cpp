#include <iostream>
using namespace std;
int main(){
    int n,count=0;
    cin>>n;
    int a[100][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    int max=a[0][1];
    int k=a[0][1];
    for(int i=1;i<n-1;i++){
        k=(k-a[i][0])+a[i][1];
        if(k>=max){
            max=k;
        }
    }cout<<max<<endl;
    }