#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main(){
    int a[5][5];
    int poi=0;
    int poj=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                int poi=i;
                int poj=j;
            }
        }
    }
    cout<<(abs(2-poi)+abs(2-poj));
    return 0;
}
