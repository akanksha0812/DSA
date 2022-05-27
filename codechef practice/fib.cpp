#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int arr[4];
      for (int i=0;i<=4;i++){
        cin>>arr[i];  
      }
      int k=max(arr[i])
      int arr[i]=arr[i]-k;
      int p=max(arr[i]);
      int fair=k+p;
      for(int i =0;i<2;i++){
          int a=max(arr[i]);
      }
      for(int i=2;i<4;i++){
          int b=max(arr[i]);
      }
      int sum=a+b;
      if(sum==fair){
          cout<<"Yes"<<endl;
      }
      else{
          cout<<"No"<<endl;
      }
    }
    return 0;
}