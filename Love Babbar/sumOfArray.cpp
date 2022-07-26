#include<iostream>
using namespace std;
int sumArray(int arr[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[1000] , count=0 ;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of elements of array is:"<<sumArray(arr,n)<<endl;
return 0;
}