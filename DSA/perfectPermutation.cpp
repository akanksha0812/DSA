#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else{
            for (int i=1;i<n+1;i=i+2){
                arr[i]=i+1;
                arr[i+1]=i;
            }
            for(int i=1;i<n+1;i++){
                cout<<arr[i]<<" ";
            }
        }
        return 0;
}