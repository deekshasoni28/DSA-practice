#include<iostream>
using namespace std;
int main(){
    int arr[]={2,3,3,6,6,6,6,9,10,10,13,14,15,15};
    int n=sizeof(arr)/sizeof(arr[0]);
    int temp[n]; 
    int j=0;
    temp[j]=arr[0];
    j=1;
    
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            temp[j]=arr[i];
            j++;
        }
    }
    cout<<"Final Array : ";
    for(int i=0;i<j;i++){
        cout<<temp[i]<<" ";
    }

    return 0;
}