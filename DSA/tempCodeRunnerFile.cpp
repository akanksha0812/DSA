#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum=sum+arr[i];
        double a=sum/n;
        cout<<setprecision(12)<<a<<endl;
    }
}