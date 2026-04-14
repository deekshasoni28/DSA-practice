#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=7;
    int flag=0;
    int index;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            flag=1;
            break;
        }
    }
    if(flag){
        cout<<"key Found"<<endl;
        cout<<"Element found at index : "<<index;
    }
    else{
        cout<<"Not found";
    }
    return 0;
}