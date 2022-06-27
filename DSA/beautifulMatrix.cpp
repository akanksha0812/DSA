#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[5][5];
    int posi = 0;
    int posj = 0;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>arr[i][j];
            if(arr[i][j] == 1){
                posi = i; posj = j;
            }
        }
    }
    cout<<(abs(2-posi)+abs(2-posj));
    return 0;
}

