#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
void reverseAlternate(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[start + 1]);
        swap(arr[end], arr[end - 1]);
        start++;
        end--;
    }
}
void printArray(int arr[], int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main()
{
    int size;
    cin >> size;
    int arr[1000];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    reverseAlternate(arr, size);
    printArray(arr, size);
}