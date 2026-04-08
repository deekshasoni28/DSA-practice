#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,100,34,54,6,90,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    int largest=INT_MIN;
    for (int i=0;i<n;i++){
        if (largest<=arr[i]){
            largest=arr[i];
        }
    }
    cout<<"Largest element of array is : "<<largest;
    return 0; 
}