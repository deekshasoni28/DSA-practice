#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={4,5,2,8,6,7,1,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int min=INT_MAX;
    int min2  =INT_MAX;
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min2=min;
            min=arr[i];
        }
        else if(arr[i]<min2 && arr[i]>min){
            min2=arr[i];
        }
    }

     cout<<"Second Smallest element of array is "<<min2;
    return 0;
}