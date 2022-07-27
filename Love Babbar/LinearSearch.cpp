#include<iostream>
using namespace std;

bool search(int arr[], int size, int num){
    for(int i=0;i<size;i++){
        if(arr[i] == num){
            return 1;
        }
    }
        return 0;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int num;
    cin>>num;
    bool found=search(arr,10,num);
    if(found){
        cout<<"element found"<<endl;
    }else{
        cout<<"element not found"<<endl;
    }
}