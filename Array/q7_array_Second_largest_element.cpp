#include<iostream>
#include<climits>
using namespace std;
int main(){
   int arr[] ={2,1,5,3,9,6,8,4,0,10};
   int n=sizeof(arr)/sizeof(arr[0]);
   int max=INT_MIN;
   int max2  =INT_MIN;
   for (int i=0;i<n;i++){
        if(arr[i]>max){
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]<<max){
            max2=arr[i];
        }
    }
    cout<<"Second largest element of array is "<<max2;
    return 0;
}