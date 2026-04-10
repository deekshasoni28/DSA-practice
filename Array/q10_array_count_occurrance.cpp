#include<iostream>
using namespace std;
int main(){
    int arr[]={4,5,3,4,5,4,4,3,66,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=40;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    if(count>0){
        cout<<key<<" is found "<<count<<" times in this given array";
    }
    else{
        cout<<"Element not FOUND";
    }
    return 0;

}    