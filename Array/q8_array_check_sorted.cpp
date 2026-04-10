#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,6,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int flag=0;
    for (int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"Not Sorted Array";
    }
    else{
        cout<<"Sorted Array";
    }
    return 0;
}