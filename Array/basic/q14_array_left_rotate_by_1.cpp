#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int first=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=first;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}    